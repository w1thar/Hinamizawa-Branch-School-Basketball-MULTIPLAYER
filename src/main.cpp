// Entry point (original WinMain 0x408a90).
//   -fullscreen      start in borderless fullscreen (Alt+Enter toggles at any time)
//   -window          start windowed (default)
//   -scale N         initial window size = N x 640x480
//   -novsync         do not wait for vertical blank
#include <cstdlib>
#include <cstring>

#include "core/pak.h"
#include "game/game.h"
#include "platform/platform.h"

void TextCacheEndFrame();

static int Run(int argc, char **argv)
{
    plat::Config cfg;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "-fullscreen")) cfg.fullscreen = true;
        else if (!strcmp(argv[i], "-window")) cfg.fullscreen = false;
        else if (!strcmp(argv[i], "-novsync")) cfg.vsync = false;
        else if (!strcmp(argv[i], "-scale") && i + 1 < argc) cfg.windowScale = atoi(argv[++i]);
    }
    if (!plat::Init(cfg)) return 1;
    if (!pak_init()) {
        plat::ErrorBox("assets missing from the executable");
        plat::Shutdown();
        return 1;
    }

    Game *game = new Game();
    if (!game->Create()) {
        delete game;
        plat::Shutdown();
        return 0;
    }
    game->InitGame();
    while (plat::PumpEvents() && !game->quit) {
        game->UpdateTimer();
        game->UpdateInput();
        game->Frame();
        TextCacheEndFrame();
    }
    game->ShutdownGame();
    delete game;
    plat::Shutdown();
    return 0;
}

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <shellapi.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    int argc = 0;
    wchar_t **wargv = CommandLineToArgvW(GetCommandLineW(), &argc);
    char **argv = (char **)calloc(argc + 1, sizeof(char *));
    for (int i = 0; i < argc; i++) {
        int n = WideCharToMultiByte(CP_UTF8, 0, wargv[i], -1, nullptr, 0, nullptr, nullptr);
        argv[i] = (char *)malloc(n);
        WideCharToMultiByte(CP_UTF8, 0, wargv[i], -1, argv[i], n, nullptr, nullptr);
    }
    LocalFree(wargv);
    return Run(argc, argv);
}
#else
int main(int argc, char **argv) { return Run(argc, argv); }
#endif
