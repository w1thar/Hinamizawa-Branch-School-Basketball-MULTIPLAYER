// Win32 backend: window + WGL OpenGL context, keyboard, QPC timer, waveOut audio, GDI text,
// asset archive from an RCDATA resource.
#define WIN32_LEAN_AND_MEAN
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <mmsystem.h>

#include <GL/gl.h>

#include <cstring>

#include "platform/platform.h"
#include "render/gfx.h"
#include "resource.h"

namespace plat {

namespace {

HINSTANCE g_inst;
HWND g_hwnd;
HDC g_hdc;
HGLRC g_glrc;
bool g_quit;
bool g_fullscreen;
RECT g_windowedRect;
LARGE_INTEGER g_freq;

void UpdateOutputRect()
{
    RECT rc;
    GetClientRect(g_hwnd, &rc);
    int cw = rc.right - rc.left, ch = rc.bottom - rc.top;
    if (cw <= 0 || ch <= 0) return;
    // Largest 4:3 rectangle that fits, centred.
    int w = cw, h = cw * SCREEN_H / SCREEN_W;
    if (h > ch) {
        h = ch;
        w = ch * SCREEN_W / SCREEN_H;
    }
    gfx::GetDevice()->SetOutputRect((cw - w) / 2, (ch - h) / 2, w, h, cw, ch);
}

void SetFullscreen(bool on)
{
    if (on == g_fullscreen) return;
    g_fullscreen = on;
    if (on) {
        GetWindowRect(g_hwnd, &g_windowedRect);
        MONITORINFO mi = {sizeof(mi)};
        GetMonitorInfo(MonitorFromWindow(g_hwnd, MONITOR_DEFAULTTONEAREST), &mi);
        SetWindowLongPtr(g_hwnd, GWL_STYLE, WS_POPUP | WS_VISIBLE);
        SetWindowPos(g_hwnd, HWND_TOP, mi.rcMonitor.left, mi.rcMonitor.top, mi.rcMonitor.right - mi.rcMonitor.left,
                     mi.rcMonitor.bottom - mi.rcMonitor.top, SWP_FRAMECHANGED | SWP_SHOWWINDOW);
    } else {
        SetWindowLongPtr(g_hwnd, GWL_STYLE, WS_OVERLAPPEDWINDOW | WS_VISIBLE);
        SetWindowPos(g_hwnd, HWND_NOTOPMOST, g_windowedRect.left, g_windowedRect.top,
                     g_windowedRect.right - g_windowedRect.left, g_windowedRect.bottom - g_windowedRect.top,
                     SWP_FRAMECHANGED | SWP_SHOWWINDOW);
    }
    UpdateOutputRect();
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp)
{
    switch (msg) {
    case WM_KEYDOWN:
        if (wp == VK_ESCAPE) DestroyWindow(hwnd);   // original: ESC quits at any time
        return 0;
    case WM_SYSKEYDOWN:
        if (wp == VK_RETURN && (lp & (1 << 29))) {  // Alt+Enter
            SetFullscreen(!g_fullscreen);
            return 0;
        }
        break;
    case WM_SIZE:
        if (g_hwnd) UpdateOutputRect();
        return 0;
    case WM_SETCURSOR:
        if (LOWORD(lp) == HTCLIENT) {
            SetCursor(nullptr);   // the original hid the cursor
            return TRUE;
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcW(hwnd, msg, wp, lp);
}

// ---- audio ----------------------------------------------------------------------------------
const int AUDIO_BUFFERS = 4;
const int AUDIO_FRAMES = 512;
HWAVEOUT g_waveOut;
WAVEHDR g_hdrs[AUDIO_BUFFERS];
int16_t g_audioData[AUDIO_BUFFERS][AUDIO_FRAMES * 2];
HANDLE g_audioEvent, g_audioThread;
volatile bool g_audioRun;
CRITICAL_SECTION g_audioLock;
AudioCallback g_audioCb;
void *g_audioUser;

DWORD WINAPI AudioThread(LPVOID)
{
    while (g_audioRun) {
        WaitForSingleObject(g_audioEvent, 50);
        for (int i = 0; i < AUDIO_BUFFERS; i++) {
            if (!(g_hdrs[i].dwFlags & WHDR_DONE)) continue;
            EnterCriticalSection(&g_audioLock);
            g_audioCb(g_audioData[i], AUDIO_FRAMES, g_audioUser);
            LeaveCriticalSection(&g_audioLock);
            g_hdrs[i].dwFlags &= ~WHDR_DONE;
            waveOutWrite(g_waveOut, &g_hdrs[i], sizeof(WAVEHDR));
        }
    }
    return 0;
}

}  // namespace

bool Init(const Config &cfg)
{
    g_inst = GetModuleHandleW(nullptr);
    QueryPerformanceFrequency(&g_freq);
    InitializeCriticalSection(&g_audioLock);

    WNDCLASSW wc = {};
    wc.style = CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = WndProc;
    wc.hInstance = g_inst;
    wc.hIcon = LoadIconW(g_inst, MAKEINTRESOURCEW(IDI_APP));
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wc.lpszClassName = L"YnSoft";
    if (!RegisterClassW(&wc)) {
        ErrorBox("ウィンドウクラスの登録エラー");
        return false;
    }

    int scale = cfg.windowScale;
    if (scale <= 0) {
        RECT work;
        SystemParametersInfo(SPI_GETWORKAREA, 0, &work, 0);
        scale = 1;
        while ((scale + 1) * SCREEN_W + 32 <= work.right - work.left &&
               (scale + 1) * SCREEN_H + 64 <= work.bottom - work.top)
            scale++;
    }
    RECT r = {0, 0, SCREEN_W * scale, SCREEN_H * scale};
    AdjustWindowRect(&r, WS_OVERLAPPEDWINDOW, FALSE);
    int ww = r.right - r.left, wh = r.bottom - r.top;
    int sx = (GetSystemMetrics(SM_CXSCREEN) - ww) / 2, sy = (GetSystemMetrics(SM_CYSCREEN) - wh) / 2;
    g_hwnd = CreateWindowW(L"YnSoft", L"YnSoft", WS_OVERLAPPEDWINDOW, sx > 0 ? sx : 0, sy > 0 ? sy : 0, ww, wh, nullptr, nullptr,
                           g_inst, nullptr);
    if (!g_hwnd) {
        ErrorBox("ウィンドウの作成エラー");
        return false;
    }

    g_hdc = GetDC(g_hwnd);
    PIXELFORMATDESCRIPTOR pfd = {};
    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 32;
    pfd.cDepthBits = 24;
    pfd.iLayerType = PFD_MAIN_PLANE;
    int pf = ChoosePixelFormat(g_hdc, &pfd);
    if (!pf || !SetPixelFormat(g_hdc, pf, &pfd) || !(g_glrc = wglCreateContext(g_hdc)) ||
        !wglMakeCurrent(g_hdc, g_glrc)) {
        ErrorBox("D3Dデバイスの作成失敗");
        return false;
    }
    typedef BOOL(WINAPI * SwapIntervalFn)(int);
    SwapIntervalFn swapInterval = (SwapIntervalFn)(void *)wglGetProcAddress("wglSwapIntervalEXT");
    if (swapInterval) swapInterval(cfg.vsync ? 1 : 0);

    gfx::GetDevice()->Init();
    ShowWindow(g_hwnd, SW_SHOW);
    UpdateWindow(g_hwnd);
    UpdateOutputRect();
    if (cfg.fullscreen) SetFullscreen(true);
    return true;
}

void Shutdown()
{
    AudioClose();
    gfx::GetDevice()->Shutdown();
    if (g_glrc) {
        wglMakeCurrent(nullptr, nullptr);
        wglDeleteContext(g_glrc);
    }
    if (g_hwnd && IsWindow(g_hwnd)) DestroyWindow(g_hwnd);
    DeleteCriticalSection(&g_audioLock);
}

bool PumpEvents()
{
    MSG msg;
    while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) g_quit = true;
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    return !g_quit;
}

void Present() { SwapBuffers(g_hdc); }

void ToggleFullscreen() { SetFullscreen(!g_fullscreen); }

bool KeyDown(int key)
{
    if (GetForegroundWindow() != g_hwnd) return false;
    return (GetKeyState(key) & 0x80) != 0;
}

double TimeSeconds()
{
    LARGE_INTEGER t;
    QueryPerformanceCounter(&t);
    return (double)t.QuadPart / (double)g_freq.QuadPart;
}

void SleepMs(int ms) { Sleep(ms); }

void ErrorBox(const char *msg)
{
    wchar_t buf[512];
    MultiByteToWideChar(CP_UTF8, 0, msg, -1, buf, 512);
    MessageBoxW(g_hwnd, buf, L"basket.exe", MB_OK);
}

bool AudioOpen(AudioCallback cb, void *user)
{
    g_audioCb = cb;
    g_audioUser = user;
    WAVEFORMATEX wf = {};
    wf.wFormatTag = WAVE_FORMAT_PCM;
    wf.nChannels = 2;
    wf.nSamplesPerSec = AUDIO_RATE;
    wf.wBitsPerSample = 16;
    wf.nBlockAlign = 4;
    wf.nAvgBytesPerSec = AUDIO_RATE * 4;
    g_audioEvent = CreateEventW(nullptr, FALSE, FALSE, nullptr);
    if (waveOutOpen(&g_waveOut, WAVE_MAPPER, &wf, (DWORD_PTR)g_audioEvent, 0, CALLBACK_EVENT) != MMSYSERR_NOERROR) {
        CloseHandle(g_audioEvent);
        return false;
    }
    for (int i = 0; i < AUDIO_BUFFERS; i++) {
        memset(g_audioData[i], 0, sizeof(g_audioData[i]));
        g_hdrs[i] = WAVEHDR();
        g_hdrs[i].lpData = (LPSTR)g_audioData[i];
        g_hdrs[i].dwBufferLength = sizeof(g_audioData[i]);
        waveOutPrepareHeader(g_waveOut, &g_hdrs[i], sizeof(WAVEHDR));
        waveOutWrite(g_waveOut, &g_hdrs[i], sizeof(WAVEHDR));
    }
    g_audioRun = true;
    g_audioThread = CreateThread(nullptr, 0, AudioThread, nullptr, 0, nullptr);
    SetThreadPriority(g_audioThread, THREAD_PRIORITY_TIME_CRITICAL);
    return true;
}

void AudioClose()
{
    if (!g_audioThread) return;
    g_audioRun = false;
    SetEvent(g_audioEvent);
    WaitForSingleObject(g_audioThread, INFINITE);
    CloseHandle(g_audioThread);
    g_audioThread = nullptr;
    waveOutReset(g_waveOut);
    for (int i = 0; i < AUDIO_BUFFERS; i++) waveOutUnprepareHeader(g_waveOut, &g_hdrs[i], sizeof(WAVEHDR));
    waveOutClose(g_waveOut);
    CloseHandle(g_audioEvent);
}

void AudioLock() { EnterCriticalSection(&g_audioLock); }
void AudioUnlock() { LeaveCriticalSection(&g_audioLock); }

bool RasterText(const char *utf8, int height, std::vector<uint8_t> &alpha, int &w, int &h)
{
    wchar_t text[512];
    int len = MultiByteToWideChar(CP_UTF8, 0, utf8, -1, text, 512) - 1;
    if (len <= 0) return false;

    // Original: LOGFONT { lfHeight = size, lfWeight = 400, lfCharSet = SHIFTJIS_CHARSET,
    // lfFaceName = "標準ゴシック" }. That face never existed on stock Windows, so GDI's font
    // mapper fell back to the system Japanese gothic (MS Gothic); ask for it directly.
    HFONT font = CreateFontW(height, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, SHIFTJIS_CHARSET, OUT_DEFAULT_PRECIS,
                             CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, FIXED_PITCH | FF_MODERN, L"MS Gothic");
    HDC dc = CreateCompatibleDC(nullptr);
    HGDIOBJ oldFont = SelectObject(dc, font);
    SIZE sz;
    GetTextExtentPoint32W(dc, text, len, &sz);
    w = sz.cx + 2;
    h = sz.cy + 2;

    BITMAPINFO bi = {};
    bi.bmiHeader.biSize = sizeof(bi.bmiHeader);
    bi.bmiHeader.biWidth = w;
    bi.bmiHeader.biHeight = -h;
    bi.bmiHeader.biPlanes = 1;
    bi.bmiHeader.biBitCount = 32;
    void *bits = nullptr;
    HBITMAP bmp = CreateDIBSection(dc, &bi, DIB_RGB_COLORS, &bits, nullptr, 0);
    HGDIOBJ oldBmp = SelectObject(dc, bmp);
    memset(bits, 0, (size_t)w * h * 4);
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, RGB(255, 255, 255));
    TextOutW(dc, 0, 0, text, len);
    GdiFlush();

    alpha.resize((size_t)w * h);
    const uint32_t *src = (const uint32_t *)bits;
    for (size_t i = 0; i < alpha.size(); i++) alpha[i] = (uint8_t)((src[i] >> 8) & 0xff);

    SelectObject(dc, oldBmp);
    SelectObject(dc, oldFont);
    DeleteObject(bmp);
    DeleteObject(font);
    DeleteDC(dc);
    return true;
}

const uint8_t *PakData(size_t *size)
{
    HRSRC res = FindResourceW(nullptr, MAKEINTRESOURCEW(IDR_ASSETS), MAKEINTRESOURCEW(10) /* RT_RCDATA */);
    if (!res) return nullptr;
    HGLOBAL mem = LoadResource(nullptr, res);
    *size = SizeofResource(nullptr, res);
    return (const uint8_t *)LockResource(mem);
}

}  // namespace plat
