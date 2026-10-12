#include "game/lang.h"

#include <string>
#include <unordered_map>

#include "game/settings.h"

namespace {

const char *const kTable[][2] = {
    // ---- title / attract ----
    {"昭和５８年　初夏", "Early summer, 1983"},
    {"××県　鹿骨市", "Shishibone City, ×× Prefecture"},
    {"ＰＵＳＨ　'Ｘ'ＫＥＹ", "PUSH 'X' KEY"},
    {"矢印キー：移動　　Programed by ひぐ中（ぇー", "Arrow keys: move     Programmed by Higuchuu (eh~)"},

    // ---- mode select ----
    {"プレイモードを選択してください", "Select a play mode"},
    {"ノーマルモード", "Normal Mode"},
    {"　部活モード", "Club Mode"},
    {"　練習モード", "Practice Mode"},
    {"ESCキー:ポーズ", "ESC: pause"},

    // ---- team select ----
    {"チーム分け", "Team Selection"},
    {"あなたのチームのプレーヤーを３人選択してください", "Pick the 3 players for your team"},
    {"あなたのチームのプレーヤーを２人選択してください", "Pick the 2 players for your team"},
    {"あなたのチームのプレーヤーを１人選択してください", "Pick your player"},
    {"前原　圭一", "Keiichi Maebara"},
    {"園崎　魅音", "Mion Sonozaki"},
    {"竜宮　レナ", "Rena Ryuugu"},
    {"北条　沙都子", "Satoko Houjou"},
    {"古手　梨花", "Rika Furude"},
    {"園崎　詩音", "Shion Sonozaki"},

    {"物語の主人公、”口先の魔術師”", "The hero, the \"Mage of the Mouth\"."},
    {"唯一の男キャラ。各能力値は高い", "The only boy. All his stats are"},
    {"が、たまに暴走する。", "high, but he sometimes runs wild."},
    {"”俺如キニ祟リ殺サレルナ！？”", "\"Don't get cursed to death by me!?\""},
    {"必殺技：ビジョンアクチュエーション", "Special: Vision Actuation"},

    {"部活の部長、最年長”おじさん”", "Club president, the oldest, \"Uncle\"."},
    {"全ての能力が平均以上であり、オール", "Above average at everything: an"},
    {"マイティな使いやすいキャラ。", "easy-to-play all-rounder."},
    {"”勝つためには、手段を選ぶな！！”", "\"To win, use ANY means necessary!!\""},
    {"必殺技：ひき肉トルネード", "Special: Mincemeat Tornado"},

    {"メインヒロイン、かぁいいものに", "The heroine, who can't resist"},
    {"目がない。能力は特に弱点は無く、", "cute things. No real weaknesses,"},
    {"ジャンプ力が特に優れている。", "and an especially good jumper."},
    {"”かぁいい～！お持ち帰りっ～！！”", "\"So cute~! I'm taking it home~!!\""},
    {"必殺技：レナフラッシュダンクＳ", "Special: Rena Flash Dunk S"},

    {"梨花と共に最年少。トラップマスター。", "Youngest, with Rika. Trap master."},
    {"負けず嫌いだが、おっちょこちょい。", "Hates losing, but is clumsy."},
    {"背は低いが、足が非常に速い。", "Short, but very fast on her feet."},
    {"”圭一さんには負けませんことよ！”", "\"I shan't lose to you, Keiichi-san!\""},
    {"必殺技：ワイヤーブービートラップ", "Special: Wire Booby Trap"},

    {"沙都子と共に最年少。オヤシロ小狸。", "Youngest, with Satoko. Oyashiro's tanuki."},
    {"運動能力は他のキャラに比べると少々", "Less athletic than the others,"},
    {"劣るが、ループ力のみ特別高い。", "but her loop shots are superb."},
    {"”みー！　にぱ～～☆”", "\"Mii! Nipah~~☆\""},
    {"必殺技：コダヌキカァイイモード", "Special: Kawaii Tanuki Mode"},

    {"園崎 魅音の双子の妹。興宮在住。", "Mion's twin sister, from Okinomiya."},
    {"普段は部活には加わらないが、今回は", "Not usually in the club, but she's"},
    {"大会なので特別参加。", "joining in for the tournament."},
    {"”あなたを、犯人です☆”", "\"I declare you the culprit☆\""},
    {"必殺技：おさぼりマネージャー", "Special: Slacker Manager"},

    {"このチームでよろしいですか？", "Is this team OK?"},
    {"ＹＯＵ", "YOU"},
    {"ＣＯＭ", "COM"},
    {"モード：ノーマル", "Mode: Normal"},
    {"　モード：部活", "Mode: Club"},
    {"　モード：練習", "Mode: Practice"},
    {"はい", "Yes"},
    {"いいえ", "No"},

    // ---- match ----
    {"後半戦", "2nd Half"},
    {"前半戦", "1st Half"},
    {"スタート！", "Tip-off!"},
    {"試合終了", "Full Time"},
    {"はーふたいむ", "Half Time"},
    {"ゴール！！", "Goal!!"},
    {"ラインアウト", "Out of Bounds"},
    {"右矢印：時計回り", "Right: turn clockwise"},
    {"左矢印：反時計回り", "Left: turn anticlockwise"},
    {"上矢印：前進", "Up: forward"},
    {"下矢印：後退", "Down: back"},
    {"Ｘキー：パス", "X: pass"},
    {"Ｚキー：ループパス　　　(コーン青)", "Z: loop pass (blue cone)"},
    {"　〃　：ループシュート　(コーン緑)", "Z: loop shot (green cone)"},
    {"　〃　：ジャンプシュート(コーン赤)", "Z: jump shot (red cone)"},
    {"前半戦は←のゴールに向かって攻める(後半は逆)", "1st half: attack the left goal (2nd half: the right one)"},
    {"ホールド状態：（Ｘキー、Ｚキー押しっぱなし）敵にボールを奪われない",
     "Holding X or Z keeps the ball safe from the opponents"},

    // ---- half time / results ----
    {"休憩中", "Break"},
    {"Ｘキー：後半戦へ　　矢印キー：移動　　ESCキー：ポーズ", "X: start the 2nd half     Arrows: move     ESC: pause"},
    {"終了", "End"},
    {"結果発表", "Results"},
    {"ＹＯＵ　ＷＩＮ！", "YOU WIN!"},
    {"ＹＯＵ　ＬＯＳＥ", "YOU LOSE"},
    {"ＤＲＡＷ", "DRAW"},
    {"ＧＡＭＥ　ＯＶＥＲ", "GAME OVER"},

    // ---- added by this mod: menus ----
    {"ローカル対戦", "Local Multiplayer"},
    {"オンライン対戦", "Online Multiplayer"},
    {"設定", "Settings"},
    {"全体の音量", "Master volume"},
    {"音楽の音量", "Music volume"},
    {"効果音の音量", "Sound effects"},
    {"言語", "Language"},
    {"日本語", "日本語 (Japanese)"},
    {"英語", "English"},
    {"戻る", "Back"},
    {"Ｐ１", "P1"},
    {"Ｐ２", "P2"},
    {"Ｐ１　ＷＩＮ！", "P1 WINS!"},
    {"Ｐ２　ＷＩＮ！", "P2 WINS!"},
    {"モード", "Mode"},
    {"人数", "Team size"},
    {"スタート", "Start"},
    {"部屋を作る", "Host a game"},
    {"コードで参加", "Join with a code"},
    {"ＬＡＮで探す", "Find LAN games"},
    {"名前：", "Name: "},
    {"名前を入力してください", "Type your name"},
    {"招待コード または IPアドレス を入力してください", "Type the invite code or an IP address"},
    {"Enter：決定　　Esc：戻る", "Enter: OK     Esc: back"},
    {"Enter：接続　　Ctrl+V：貼り付け　　Esc：戻る", "Enter: join     Ctrl+V: paste     Esc: back"},
    {"（コードの入力にはキーボードを使います）", "(typing a code needs a keyboard)"},
    {"コードが正しくありません", "That code is not valid"},
    {"同じネットワークの部屋を探しています…", "Looking for games on your network..."},
    {"　試合中", "  in a match"},
    {"接続しています…", "Connecting..."},
    {"Esc：キャンセル", "Esc: cancel"},
    {"Ｘ：戻る", "X: back"},
    {"接続できませんでした", "Could not connect"},
    {"コード・ホストのポート開放・ファイアウォールを確認してください", "Check the code, the host's port forwarding and firewalls"},
    {"この部屋は満員です", "That game is full"},
    {"この部屋は試合中です", "That game is in a match right now"},
    {"ゲームのバージョンが違います", "Different game version"},
    {"ホストが部屋を閉じました", "The host closed the game"},
    {"ホストとの接続が切れました", "Lost the connection to the host"},
    {"ポートを開けませんでした", "Could not open the network port"},
    {"ネットワークを使えません", "Networking is not available"},
    {"ロビー", "Lobby"},
    {"招待コード：", "Invite code: "},
    {"接続先：", "Connected to "},
    {"ルーターのポートを開いています…", "Opening the router port..."},
    {"注意：回線がCGNATのため、インターネットから参加できない可能性があります", "Note: your connection uses CGNAT, players on the internet may not be able to join"},
    {"ポート開放：成功（UPnP）", "Port opened automatically (UPnP)"},
    {"自動ポート開放に失敗：ルーターで UDP %u を開放してください", "Could not open the port: forward UDP %u on your router"},
    {"公開アドレスを取得できませんでした（LAN / VPN のみ）", "No public address found (LAN / VPN only)"},
    {"チームＡ", "Team A"},
    {"チームＢ", "Team B"},
    {"チームＡ　ＷＩＮ！", "TEAM A WINS!"},
    {"チームＢ　ＷＩＮ！", "TEAM B WINS!"},
    {"ホスト", "Host"},
    {"準備ＯＫ", "Ready"},
    {"準備中", "Not ready"},
    {"チーム", "Team"},
    {"キャラクター", "Character"},
    {"準備", "Ready?"},
    {"試合開始", "Start match"},
    {"部屋を出る", "Leave"},
    {"全員の準備ＯＫを待っています", "Waiting for everyone to be ready"},
    {"人が片方のチームだけなら協力プレイ（ＣＯＭと対戦）、両チームなら対戦です", "Players on one team only: co-op vs COM. On both teams: versus"},
    {"圭一", "Keiichi"},
    {"魅音", "Mion"},
    {"レナ", "Rena"},
    {"沙都子", "Satoko"},
    {"梨花", "Rika"},
    {"詩音", "Shion"},
    {"操作", "Control"},
    {"試合時間", "Match time"},
    {"ボールに近いキャラに自動切替", "Auto-switch (nearest to ball)"},
    {"選んだキャラで固定", "Fixed character"},
    {"５分×２（ハーフタイムあり）", "2 x 5 min (with half time)"},
    {"３分", "3 min"},
    {"５分", "5 min"},
    {"１０分", "10 min"},
    {"キーボード", "Keyboard"},
    {"（なし）", "(none)"},
    {"対戦（Ｐ１対Ｐ２）", "Versus (P1 vs P2)"},
    {"協力（ＣＯＭと対戦）", "Co-op (vs COM)"},
    {"Ｐ１とＰ２に別々の入力機器を選んでください", "P1 and P2 need different devices"},
    {"Ｐ１：使うキャラクターを選んでください", "P1: choose your character"},
    {"Ｐ２：使うキャラクターを選んでください", "P2: choose your character"},
    {"Ｐ１：チームメイトを選んでください", "P1: choose a teammate"},
    {"Ｐ２：チームメイトを選んでください", "P2: choose a teammate"},
    {"試合の人数を選択してください", "Choose the team size"},
    {"１対１", "1 vs 1"},
    {"２対２", "2 vs 2"},
    {"３対３", "3 vs 3"},
    {"ポーズ", "Paused"},
    {"再開", "Resume"},
    {"タイトルに戻る", "Return to Title"},
    {"ゲーム終了", "Quit Game"},
    {"↑↓：選択　　Ｘ：決定　　ESC：再開", "Up/Down: select     X: confirm     ESC: resume"},
    {"←→：変更　　Ｘ：決定", "Left/Right: change     X: select"},
};

std::unordered_map<std::string, const char *> &Map()
{
    static std::unordered_map<std::string, const char *> m;
    if (m.empty())
        for (const auto &e : kTable) m[e[0]] = e[1];
    return m;
}

}  // namespace

const char *Lang_English(const char *jp)
{
    auto it = Map().find(jp);
    return it == Map().end() ? nullptr : it->second;
}

const char *Tr(const char *jp)
{
    if (g_settings.language != LANG_ENGLISH) return jp;
    const char *en = Lang_English(jp);
    return en ? en : jp;
}
