// DrawHUD (0x41b070): all text, drawn after EndScene like the original's GDI TextOut calls.
// Colours that "pulse" use (int)(sin(t*k)*128+128); like GDI's RGB() the components wrap mod 256.
#include <cmath>
#include <cstdio>

#include <string>

#include "game/game.h"
#include "game/input.h"
#include "game/lang.h"
#include "game/settings.h"

namespace {

int Pulse(float t, float k) { return (int)(sinf(t * k) * 128.0f + 128.0f); }

}  // namespace

void Game::DrawHUD()
{
    // Mod: while paused only the pause menu is shown.
    if (paused) {
        if (pausePage == 1) DrawSettingsMenu();
        else DrawPauseMenu();
        return;
    }

    // ---- state 2: opening captions ----
    if (state == 2 && f390 >= 1.0f && f390 < 2.0f) {
        snprintf(text, sizeof(text), "昭和５８年　初夏");
        int c = (int)((f390 - 1.0f) * 255.0f);
        DrawText(text, 28, 207, 230, c, c, c);
    }
    if (state == 2 && f390 >= 2.0f && f390 < 4.0f) {
        snprintf(text, sizeof(text), "昭和５８年　初夏");
        DrawText(text, 28, 207, 230, 255, 255, 255);
    }
    if (state == 2 && f390 >= 4.0f && f390 < 5.0f) {
        snprintf(text, sizeof(text), "昭和５８年　初夏");
        int c = (int)((5.0f - f390) * 255.0f);
        DrawText(text, 28, 207, 230, c, c, c);
    }
    if (state == 2 && f390 >= 6.0f && f390 < 7.0f) {
        snprintf(text, sizeof(text), "××県　鹿骨市");
        int c = (int)((f390 - 6.0f) * 255.0f);
        DrawText(text, 28, 223, 230, c, c, c);
    }
    if (state == 2 && f390 >= 7.0f && f390 < 9.0f) {
        snprintf(text, sizeof(text), "××県　鹿骨市");
        DrawText(text, 28, 223, 230, 255, 255, 255);
    }
    if (state == 2 && f390 >= 9.0f && f390 < 10.0f) {
        snprintf(text, sizeof(text), "××県　鹿骨市");
        int c = (int)((10.0f - f390) * 255.0f);
        DrawText(text, 28, 223, 230, c, c, c);
    }
    if (state == 2 && f390 >= 32.0f && f390 < 135.0f) {
        snprintf(text, sizeof(text), "ＰＵＳＨ　'Ｘ'ＫＥＹ");
        DrawText(text, 24, 192, 192, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
        snprintf(text, sizeof(text), "矢印キー：移動　　Programed by ひぐ中（ぇー");
        DrawText(text, 12, 371, 460, 50, 50, 50);
    }

    // ---- state 3: play mode select (mod: generic list with the extra entries) ----
    if ((state == 3) & (b39a != 0)) {
        snprintf(text, sizeof(text), "プレイモードを選択してください");
        DrawText(text, 24, 140, 192, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
        static const char *const modes[MODE_LAST + 1] = {"ノーマルモード", "　部活モード", "　練習モード", "ローカル対戦",
                                                          "設定"};
        for (int i = 0; i <= MODE_LAST; i++) {
            int y = 290 + i * 34;
            DrawTextCentered(modes[i], 28, 322, y + 2, 0, 0, 0);
            if (i == i3b0) DrawTextCentered(modes[i], 28, 320, y, 255, 0, 0);
            else DrawTextCentered(modes[i], 28, 320, y, 255, 255, 255);
        }
        snprintf(text, sizeof(text), "ESCキー:ポーズ");
        DrawText(text, 12, 499, 460, 255, 250, 150);
    }

    // ---- state 13 (mod): local multiplayer setup ----
    if (state == 13) {
        DrawTextCentered("ローカル対戦", 28, 320, 150, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
        static const char *const labels[8] = {"Ｐ１", "Ｐ２", "モード", "人数", "操作", "試合時間", "スタート", "戻る"};
        static const char *const sizes[3] = {"１対１", "２対２", "３対３"};
        static const char *const times[4] = {"５分×２（ハーフタイムあり）", "３分", "５分", "１０分"};
        for (int i = 0; i < 8; i++) {
            int y = 192 + i * 28;
            int g = i == menuSel ? 0 : 255;
            if (i >= 6) {
                DrawTextCentered(labels[i], 24, 322, y + 2, 0, 0, 0);
                DrawTextCentered(labels[i], 24, 320, y, 255, g, g);
                continue;
            }
            DrawText(labels[i], 22, 82, y + 2, 0, 0, 0);
            DrawText(labels[i], 22, 80, y, 255, g, g);
            char value[96];
            int dim = 255;
            if (i <= 1) {
                if (localDev[i] == DEVICE_NONE) snprintf(value, sizeof(value), "%s", Tr("（なし）"));
                else if (localDev[i] == DEVICE_KEYBOARD) snprintf(value, sizeof(value), "%s", Tr("キーボード"));
                else snprintf(value, sizeof(value), "%s", Input_DeviceName(localDev[i]));
            } else if (i == 2) {
                snprintf(value, sizeof(value), "%s", Tr(localVersus ? "対戦（Ｐ１対Ｐ２）" : "協力（ＣＯＭと対戦）"));
            } else if (i == 3) {
                snprintf(value, sizeof(value), "%s", Tr(sizes[localSize - 1]));
            } else if (i == 4) {
                bool autoSw = localVersus && localAuto;
                snprintf(value, sizeof(value), "%s", Tr(autoSw ? "ボールに近いキャラに自動切替" : "選んだキャラで固定"));
                if (!localVersus) dim = 150;   // co-op: always fixed
            } else {
                snprintf(value, sizeof(value), "%s", Tr(times[localTime]));
            }
            DrawText(value, 22, 242, y + 2, 0, 0, 0);
            DrawText(value, 22, 240, y, dim, g * dim / 255, g * dim / 255);
        }
        if (localDev[0] == localDev[1] || localDev[0] == DEVICE_NONE || localDev[1] == DEVICE_NONE)
            DrawTextCentered("Ｐ１とＰ２に別々の入力機器を選んでください", 16, 320, 416, 255, 120, 120);
        DrawTextCentered("←→：変更　　Ｘ：決定", 16, 320, 440, 255, 250, 150);
    }

    // ---- state 12 (mod): team size ----
    if (state == 12) {
        DrawTextCentered("試合の人数を選択してください", 24, 320, 200, Pulse(f390, 10.0f), Pulse(f390, 7.0f),
                         Pulse(f390, 3.0f));
        static const char *const sizes[4] = {"１対１", "２対２", "３対３", "戻る"};
        for (int i = 0; i < 4; i++) {
            int y = 270 + i * 36;
            DrawTextCentered(sizes[i], 28, 322, y + 2, 0, 0, 0);
            if (i == menuSel) DrawTextCentered(sizes[i], 28, 320, y, 255, 0, 0);
            else DrawTextCentered(sizes[i], 28, 320, y, 255, 255, 255);
        }
    }

    // ---- state 11 (mod): settings ----
    if (state == 11) DrawSettingsMenu();

    // ---- state 4: team selection ----
    if (state == 4 && i3b8 < 3) {
        snprintf(text, sizeof(text), "チーム分け");
        DrawText(text, 28, 243, 24, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
        static const char *const pickText[3] = {"あなたのチームのプレーヤーを１人選択してください",
                                                "あなたのチームのプレーヤーを２人選択してください",
                                                "あなたのチームのプレーヤーを３人選択してください"};
        snprintf(text, sizeof(text), "%s", pickText[teamSize - 1]);
        if (mpActive && mpPickIdx < mpPickCount) {
            const MpPick &pk = mpPicks[mpPickIdx];
            if (pk.owner == 0) snprintf(text, sizeof(text), "%s", pk.lock >= 0 ? "Ｐ１：使うキャラクターを選んでください" : "Ｐ１：チームメイトを選んでください");
            else snprintf(text, sizeof(text), "%s", pk.lock >= 0 ? "Ｐ２：使うキャラクターを選んでください" : "Ｐ２：チームメイトを選んでください");
        }
        DrawText(text, 24, 34, 74, 0, 0, 0);
        DrawText(text, 24, 32, 72, 255, 255, 255);

        static const char *const names[6] = {"前原　圭一", "園崎　魅音", "竜宮　レナ", "北条　沙都子", "古手　梨花", "園崎　詩音"};
        static const char *const desc[6][5] = {
            {"物語の主人公、”口先の魔術師”", "唯一の男キャラ。各能力値は高い", "が、たまに暴走する。",
             "”俺如キニ祟リ殺サレルナ！？”", "必殺技：ビジョンアクチュエーション"},
            {"部活の部長、最年長”おじさん”", "全ての能力が平均以上であり、オール", "マイティな使いやすいキャラ。",
             "”勝つためには、手段を選ぶな！！”", "必殺技：ひき肉トルネード"},
            {"メインヒロイン、かぁいいものに", "目がない。能力は特に弱点は無く、", "ジャンプ力が特に優れている。",
             "”かぁいい～！お持ち帰りっ～！！”", "必殺技：レナフラッシュダンクＳ"},
            {"梨花と共に最年少。トラップマスター。", "負けず嫌いだが、おっちょこちょい。", "背は低いが、足が非常に速い。",
             "”圭一さんには負けませんことよ！”", "必殺技：ワイヤーブービートラップ"},
            {"沙都子と共に最年少。オヤシロ小狸。", "運動能力は他のキャラに比べると少々", "劣るが、ループ力のみ特別高い。",
             "”みー！　にぱ～～☆”", "必殺技：コダヌキカァイイモード"},
            {"園崎 魅音の双子の妹。興宮在住。", "普段は部活には加わらないが、今回は", "大会なので特別参加。",
             "”あなたを、犯人です☆”", "必殺技：おさぼりマネージャー"},
        };
        if (i3b4 >= 0 && i3b4 < 6) {
            int nx = i3b4 == 3 ? 379 : 398;   // Satoko's longer name is shifted left
            snprintf(text, sizeof(text), "%s", names[i3b4]);
            DrawText(text, 36, nx, 194, 0, 0, 0);
            DrawText(text, 36, nx - 2, 192, 255, 255, 180);
            static const int ys[4] = {264, 288, 311, 335};
            for (int i = 0; i < 4; i++) {
                snprintf(text, sizeof(text), "%s", desc[i3b4][i]);
                DrawText(text, 16, 352, ys[i], 255, 255, 255);
            }
            snprintf(text, sizeof(text), "%s", desc[i3b4][4]);
            DrawText(text, 16, 352, 374, 255, 180, 180);
        }
    }
    if (state == 4 && -20.0f < camPos.z && i3b8 < 5) {
        snprintf(text, sizeof(text), "このチームでよろしいですか？");
        DrawText(text, 28, 128, 167, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
        snprintf(text, sizeof(text), "%s", TeamLabel(true));
        DrawText(text, 28, 76, 4, 255, 255, 0);
        snprintf(text, sizeof(text), "%s", TeamLabel(false));
        DrawText(text, 28, 480, 4, 255, 255, 0);
        if (i3b0 == 0) {
            snprintf(text, sizeof(text), "モード：ノーマル");
            DrawText(text, 24, 223, 62, 255, 255, 255);
        } else if (i3b0 == 1) {
            snprintf(text, sizeof(text), "　モード：部活");
            DrawText(text, 24, 223, 62, 255, 255, 255);
        } else {
            snprintf(text, sizeof(text), "　モード：練習");
            DrawText(text, 24, 223, 62, 255, 255, 255);
        }
        if (i3b8 == 3) {
            snprintf(text, sizeof(text), "はい");
            DrawText(text, 36, 289, 242, 0, 0, 0);
            DrawText(text, 36, 287, 240, 255, 0, 0);
            snprintf(text, sizeof(text), "いいえ");
            DrawText(text, 28, 283, 313, 0, 0, 0);
            DrawText(text, 28, 281, 311, 155, 155, 155);
        } else {
            snprintf(text, sizeof(text), "はい");
            DrawText(text, 28, 302, 242, 0, 0, 0);
            DrawText(text, 28, 300, 240, 155, 155, 155);
            snprintf(text, sizeof(text), "いいえ");
            DrawText(text, 36, 277, 313, 0, 0, 0);
            DrawText(text, 36, 275, 311, 255, 0, 0);
        }
    }

    // ---- split screen (mod): which half is whose ----
    if (state == 6 && mpActive && mpSplit) {
        DrawText("Ｐ１", 20, 10, 452, 0, 0, 0);
        DrawText("Ｐ１", 20, 8, 450, 120, 200, 255);
        DrawText("Ｐ２", 20, 332, 452, 0, 0, 0);
        DrawText("Ｐ２", 20, 330, 450, 255, 150, 120);
    }

    // ---- states 5/6: tip-off and match ----
    if ((state == 5 && i3b8 < 5) || state == 6) {
        // i3d8 = YOU score, i3dc = COM score; teams swap ends at half time (b3a6).
        if (b3a6 == 0) {
            snprintf(text, sizeof(text), "%s", TeamLabel(true));
            DrawText(text, 28, 76, 4, 255, 255, 0);
            snprintf(text, sizeof(text), "%s", TeamLabel(false));
            DrawText(text, 28, 480, 4, 255, 255, 0);
            snprintf(text, sizeof(text), "%3d", i3d8);
            DrawText(text, 48, 163, 31, 255, 255, 255);
            snprintf(text, sizeof(text), "%3d", i3dc);
            DrawText(text, 48, 401, 31, 255, 255, 255);
            if (!mpActive) {   // mod: each side attacks a different way in multiplayer
                snprintf(text, sizeof(text), "<<- Goal");
                DrawText(text, 16, 289, 73, 0, 0, 0);
                int c = (int)(cosf(f3e0 * 4.0f) * 128.0f + 128.0f);
                DrawText(text, 16, 287, 72, 255, c, c);
            }
        } else {
            snprintf(text, sizeof(text), "%s", TeamLabel(false));
            DrawText(text, 28, 76, 4, 255, 255, 0);
            snprintf(text, sizeof(text), "%s", TeamLabel(true));
            DrawText(text, 28, 480, 4, 255, 255, 0);
            snprintf(text, sizeof(text), "%3d", i3dc);
            DrawText(text, 48, 163, 31, 255, 255, 255);
            snprintf(text, sizeof(text), "%3d", i3d8);
            DrawText(text, 48, 401, 31, 255, 255, 255);
            if (!mpActive) {
                snprintf(text, sizeof(text), "Goal ->>");
                DrawText(text, 16, 289, 73, 0, 0, 0);
                int c = (int)(cosf(f3e0 * 4.0f) * 128.0f + 128.0f);
                DrawText(text, 16, 287, 72, 255, c, c);
            }
        }
        snprintf(text, sizeof(text), "TIME");
        DrawText(text, 24, 294, 0, 255, 255, 255);
        int tc = f3e0 <= 90.0f ? (int)(2.833f * f3e0) : 255;   // the clock turns red in the last 90s
        int mins = (int)(f3e0 / 60.0f);
        int secs = (int)f3e0 - (int)(f3e0 / 60.0f) * 60;
        snprintf(text, sizeof(text), "%d:%2d", mins, secs);   // original format "%d:%#2d"
        DrawText(text, 36, 284, 31, 255, tc, tc);
        if ((int)f3e0 - (int)(f3e0 / 60.0f) * 60 < 10) {
            snprintf(text, sizeof(text), "0");
            DrawText(text, 36, 320, 31, 255, tc, tc);
        }
        if (f41c < 3.0f && 0.01f < f41c) {
            snprintf(text, sizeof(text), "%d", (int)f41c + 1);
            int c = (int)(f41c + 1.0f) * 0x55;
            DrawText(text, 28, 313, 110, 255, c, c);
        }
        if (f41c < 9.5f && 6.5f < f41c) {
            snprintf(text, sizeof(text), "%d", (int)(f41c - 0.5f) - 5);
            DrawText(text, 48, 310, 335, 255, (int)(f41c + 0.5f) * 0x55, (int)(f41c + 0.5) * 0x55);
        }
        if (30.0f < camPos.y && state == 5) {
            snprintf(text, sizeof(text), b3a6 == 0 ? "前半戦" : "後半戦");
            DrawText(text, 48, 256, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
        }
        if (camPos.y <= 5.0f && f390 < 0.8f && state == 5) {
            snprintf(text, sizeof(text), "スタート！");
            DrawText(text, 48, 223, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
        }
        if (i3b8 == 5) {
            if (b3a6 == 0 && !(mpActive && mpMinutes > 0)) {
                snprintf(text, sizeof(text), "はーふたいむ");
                DrawText(text, 48, 185, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
            } else {
                snprintf(text, sizeof(text), "試合終了");
                DrawText(text, 48, 236, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
            }
        } else if (b414) {
            if (i418 == 5) {
                snprintf(text, sizeof(text), "ゴール！！");
                DrawText(text, 48, 223, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
            } else {
                snprintf(text, sizeof(text), "ラインアウト");
                DrawText(text, 48, 204, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
            }
        }
        if (i3b0 == 2) {   // practice mode: controls help (first half), hold hint (second half)
            if (b3a6 == 0) {
                snprintf(text, sizeof(text), "右矢印：時計回り");
                DrawText(text, 12, 32, 408, 255, 255, 255);
                snprintf(text, sizeof(text), "左矢印：反時計回り");
                DrawText(text, 12, 32, 422, 255, 255, 255);
                snprintf(text, sizeof(text), "上矢印：前進");
                DrawText(text, 12, 32, 436, 255, 255, 255);
                snprintf(text, sizeof(text), "下矢印：後退");
                DrawText(text, 12, 32, 451, 255, 255, 255);
                snprintf(text, sizeof(text), "Ｘキー：パス");
                DrawText(text, 12, 415, 408, 255, 255, 255);
                snprintf(text, sizeof(text), "Ｚキー：ループパス　　　(コーン青)");
                DrawText(text, 12, 415, 422, 255, 255, 255);
                snprintf(text, sizeof(text), "　〃　：ループシュート　(コーン緑)");
                DrawText(text, 12, 415, 436, 255, 255, 255);
                snprintf(text, sizeof(text), "　〃　：ジャンプシュート(コーン赤)");
                DrawText(text, 12, 415, 451, 255, 255, 255);
                snprintf(text, sizeof(text), "前半戦は←のゴールに向かって攻める(後半は逆)");
                DrawText(text, 12, 204, 465, 255, 255, 255);
            } else {
                snprintf(text, sizeof(text), "ホールド状態：（Ｘキー、Ｚキー押しっぱなし）敵にボールを奪われない");
                DrawText(text, 12, 223, 465, 255, 255, 255);
            }
        }
    }

    // ---- state 7: half time ----
    if (state == 7 && i3b8 == 2) {
        snprintf(text, sizeof(text), "%s", TeamLabel(false));
        DrawText(text, 28, 76, 4, 255, 255, 0);
        snprintf(text, sizeof(text), "%s", TeamLabel(true));
        DrawText(text, 28, 480, 4, 255, 255, 0);
        snprintf(text, sizeof(text), "%3d", i3dc);
        DrawText(text, 48, 163, 31, 255, 255, 255);
        snprintf(text, sizeof(text), "%3d", i3d8);
        DrawText(text, 48, 401, 31, 255, 255, 255);
        snprintf(text, sizeof(text), "TIME");
        DrawText(text, 24, 294, 0, 255, 255, 255);
        snprintf(text, sizeof(text), "休憩中");
        DrawText(text, 24, 284, 35, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
        snprintf(text, sizeof(text), "Ｘキー：後半戦へ　　矢印キー：移動　　ESCキー：ポーズ");
        DrawText(text, 18, 76, 86, 255, 255, 255);
    }

    // ---- state 8: results ----
    if (state == 8) {
        if (i3b8 < 4) {
            snprintf(text, sizeof(text), "%s", TeamLabel(false));
            DrawText(text, 28, 76, 4, 255, 255, 0);
            snprintf(text, sizeof(text), "%s", TeamLabel(true));
            DrawText(text, 28, 480, 4, 255, 255, 0);
            snprintf(text, sizeof(text), "%3d", i3dc);
            DrawText(text, 48, 163, 31, 255, 255, 255);
            snprintf(text, sizeof(text), "%3d", i3d8);
            DrawText(text, 48, 401, 31, 255, 255, 255);
            snprintf(text, sizeof(text), "TIME");
            DrawText(text, 24, 294, 0, 255, 255, 255);
            snprintf(text, sizeof(text), "終了");
            DrawText(text, 28, 291, 33, 255, 0, 0);
        }
        if (i3b8 == 1) {
            snprintf(text, sizeof(text), "結果発表");
            DrawText(text, 48, 236, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
        }
        if (i3b8 == 3) {
            if (mpActive && mpVersus && i3d8 != i3dc) {
                snprintf(text, sizeof(text), "%s", i3dc < i3d8 ? "Ｐ１　ＷＩＮ！" : "Ｐ２　ＷＩＮ！");
                DrawTextCentered(text, 72, 320, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
            } else if (i3dc < i3d8) {
                snprintf(text, sizeof(text), "ＹＯＵ　ＷＩＮ！");
                DrawText(text, 72, 32, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
            } else if (i3d8 < i3dc) {
                snprintf(text, sizeof(text), "ＹＯＵ　ＬＯＳＥ");
                DrawText(text, 72, 32, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
            } else {
                snprintf(text, sizeof(text), "ＤＲＡＷ");
                DrawText(text, 72, 192, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
            }
        }
        if (i3b8 == 6) {
            snprintf(text, sizeof(text), "ＧＡＭＥ　ＯＶＥＲ");
            DrawText(text, 48, 102, 225, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
        }
    }

    // ---- state 9: credits ----
    if (state == 9) {
        snprintf(text, sizeof(text), "Nice Play!!");
        DrawText(text, 12, 320, 24, 255, 255, 255);
        snprintf(text, sizeof(text), "Thank you for your playing!!");
        DrawText(text, 12, 320, 48, 255, 255, 255);
        snprintf(text, sizeof(text), "And Thanks for \"07th Storming Party\" for giving us");
        DrawText(text, 12, 320, 62, 255, 255, 255);
        snprintf(text, sizeof(text), "wonderful story of \"HIGURASHI NO NAKU KORONI\"");
        DrawText(text, 12, 320, 76, 255, 255, 255);
        snprintf(text, sizeof(text), "We are looking forward to \"MEAKASHI\" Story !!");
        DrawText(text, 12, 320, 100, 255, 255, 255);
        snprintf(text, sizeof(text), "from a Mionist...");
        DrawText(text, 12, 518, 120, 255, 255, 255);
    }
}

// ---- mod menus ----
void Game::DrawSettingsMenu()
{
    DrawTextCentered("設定", 28, 320, 192, Pulse(f390, 10.0f), Pulse(f390, 7.0f), Pulse(f390, 3.0f));
    static const char *const labels[5] = {"全体の音量", "音楽の音量", "効果音の音量", "言語", "戻る"};
    const int values[3] = {g_settings.masterVolume, g_settings.musicVolume, g_settings.sfxVolume};
    for (int i = 0; i < 5; i++) {
        int y = 250 + i * 36;
        bool sel = i == menuSel;
        int g = sel ? 0 : 255;
        if (i == 4) {
            DrawTextCentered(labels[i], 28, 322, y + 2, 0, 0, 0);
            DrawTextCentered(labels[i], 28, 320, y, 255, g, g);
            continue;
        }
        DrawText(labels[i], 24, 122, y + 2, 0, 0, 0);
        DrawText(labels[i], 24, 120, y, 255, g, g);
        char value[64];
        if (i < 3) {
            // A 10-step bar plus the percentage.
            int filled = values[i] / 10;
            std::string bar;
            for (int k = 0; k < 10; k++) bar += k < filled ? "■" : "□";
            snprintf(value, sizeof(value), "%s %3d%%", bar.c_str(), values[i]);
        } else {
            snprintf(value, sizeof(value), "%s", Tr(g_settings.language == LANG_ENGLISH ? "英語" : "日本語"));
        }
        DrawText(value, 24, 362, y + 2, 0, 0, 0);
        DrawText(value, 24, 360, y, 255, g, g);
    }
    DrawTextCentered("←→：変更　　Ｘ：決定", 16, 320, 440, 255, 250, 150);
}

void Game::DrawPauseMenu()
{
    static const char *const names[4] = {"再開", "設定", "タイトルに戻る", "ゲーム終了"};
    DrawTextCentered("ポーズ", 36, 320, 150, 255, 255, 180);
    int ids[4];
    int n = PauseItems(ids);
    for (int i = 0; i < n; i++) {
        int y = 240 + i * 40;
        DrawTextCentered(names[ids[i]], 28, 322, y + 2, 0, 0, 0);
        if (i == pauseSel) DrawTextCentered(names[ids[i]], 28, 320, y, 255, 0, 0);
        else DrawTextCentered(names[ids[i]], 28, 320, y, 255, 255, 255);
    }
    DrawTextCentered("↑↓：選択　　Ｘ：決定　　ESC：再開", 16, 320, 440, 255, 250, 150);
}
