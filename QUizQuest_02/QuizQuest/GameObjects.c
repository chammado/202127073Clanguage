#include "GameObjects.h"
#include "ConsoleUtil.h"
#include <stdio.h>

void setTitle()
{
	SetCursorVisible(0);
	printf( "\033[93m");
	SetCursorPosition(19, 3);
	printf(" .88888.            oo              .88888.                                dP   \n");
	SetCursorPosition(19, 4);
	printf("d8'   `8b                          d8'   `8b                               88   \n");
	SetCursorPosition(19, 5);
	printf("88     88  dP    dP dP d888888b    88     88  dP    dP .d8888b. .d8888b. d8888P \n");
	SetCursorPosition(19, 6);
	printf("88  db 88  88    88 88    .d8P'    88  db 88  88    88 88ooood8 Y8ooooo.   88   \n");
	SetCursorPosition(19, 7);
	printf("Y8.  Y88P  88.  .88 88  .Y8P       Y8.  Y88P  88.  .88 88.  ...       88   88   \n");
	SetCursorPosition(19, 8);
	printf(" `8888PY8b `88888P' dP d888888P     `8888PY8b `88888P' `88888P' `88888P'   dP   \n");
	SetCursorPosition(19, 9);
	printf("oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
	printf("\033[0m");
}

void SubTitle()
{
	SetCursorVisible(0);
	printf("\033[33m");
	SetCursorPosition(30, 11);
	printf(".---.     .             .        ,.   ,   ,.         .  .   \n");
	SetCursorPosition(30, 12);
	printf("\\___  ,-. |-. . ,-. . , ' ,-.    `|  /|  /   ,-. ,-. |- |-. \n");
	SetCursorPosition(30, 13);
	printf("    \\ | | | | | | | |  X  `-.     | / | /    |   ,-| |  | I\n");
	SetCursorPosition(30, 14);
	printf("`---' |-' ' ' ' ' ' ' `   `-'     `'  `'     '   `-^ `' ' ' \n");
	SetCursorPosition(30, 15);
	printf("      |                                                     \n");
	SetCursorPosition(30, 16);
	printf("      '                                                     \n");
	printf("\033[0m");
}

void TitleSphinx()
{
	SetCursorVisible(0);
	printf("\033[38;5;214m");
	SetCursorPosition(73, 21);
	printf("                 . . .~\n");
	SetCursorPosition(73, 22);
	printf("                     .-,\n");
	SetCursorPosition(73, 23);
	printf("                 .,-, ..-\n");
	SetCursorPosition(73, 24);
	printf("                 -    .,~-\n");
	SetCursorPosition(73, 25);
	printf("                .     .---\n");
	SetCursorPosition(73, 26);
	printf("                 -   ,---\n");
	SetCursorPosition(73, 27);
	printf("                 -, ,.---\n");
	SetCursorPosition(73, 28);
	printf("                ., ...,--\n");
	SetCursorPosition(73, 29);
	printf("                     ..,-\n");
	SetCursorPosition(73, 30);
	printf("               .......,--,.\n");
	SetCursorPosition(73, 31);
	printf("                      ,.........,,,,,.\n");
	SetCursorPosition(73, 32);
	printf("                      .................\n");
	SetCursorPosition(73, 33);
	printf("                     ,.................\n");
	SetCursorPosition(73, 34);
	printf("                     ............,.,..,,\n");
	SetCursorPosition(73, 35);
	printf("                      ,,...............,\n");
	SetCursorPosition(73, 36);
	printf("      , ,.,......     .........,,,,,,...\n");
	SetCursorPosition(73, 37);
	printf("  .,    ,....,,,-   . ..,,,,,.,.........\n");
	SetCursorPosition(73, 38);
	printf("...,......................................\n");
	printf("\033[0m");
}

void Horus()
{
	SetCursorVisible(0);
	printf("\033[38;5;214m");
	SetCursorPosition(87, 25);
	printf("       ,,=$$$$$$,-..\n");
	SetCursorPosition(87, 26);
	printf("     -*~~,****!.-:*-\n");
	SetCursorPosition(87, 27);
	printf("  ,@@! @@......#@-,$\n");
	SetCursorPosition(87, 28);
	printf("@@$;-;;   .......;!#\n");
	SetCursorPosition(87, 29);
	printf("          :@@@@@....\n");
	SetCursorPosition(87, 30);
	printf("       ~-*;!..!.*:..\n");
	SetCursorPosition(87, 31);
	printf("     $$,  =...!..-!.\n");
	SetCursorPosition(87, 32);
	printf("   ,*$$$-,-#-~*-:$!.\n");
	SetCursorPosition(87, 33);
	printf("        ~:=#@@*~.\n");
	SetCursorPosition(87, 34);
	printf("          = * ;\n");
	SetCursorPosition(87, 35);
	printf("        ~!.;$ ;\n");
	SetCursorPosition(87, 36);
	printf("-;     :@~@  #:\n");
	SetCursorPosition(87, 37);
	printf("-#   !*$*;   @=\n");
	SetCursorPosition(87, 38);
	printf(".,@@@#--..   -#\n");
	printf("\033[0m");
}

void MenuPrint()
{
	SetCursorVisible(0);
	SetCursorPosition(53, 21);
	printf("ㅡㅡ            ㅡㅡ");
	SetCursorPosition(53, 22);
	printf("l                  l");
	SetCursorPosition(53, 23);
	printf("l   1. 게임 시작   l");
	SetCursorPosition(53, 24);
	printf("l                  l");
	SetCursorPosition(53, 25);
	printf("l   2. 게임 방법   l");
	SetCursorPosition(53, 26);
	printf("l                  l");
	SetCursorPosition(53, 27);
	printf("l   3. 게임 종료   l");
	SetCursorPosition(53, 28);
	printf("l                  l");
	SetCursorPosition(53, 29);
	printf("ㅡㅡ            ㅡㅡ");
	SetCursorPosition(57, 36);
	printf("{___     ___}");
}

void GuidePrint()
{
	SetCursorVisible(0);
	SetCursorPosition(22, 20);
	printf("1. 최종 목표는 퀴즈를 통해 스핑크스를 물리치고 보물을 획득하는 것입니다.\n");
	SetCursorPosition(22, 22);
	printf("2. 정답은 정확하게 입력해야하며, 공백이나 오타가 들어가면 오답처리가 됩니다..\n");
	SetCursorPosition(22, 24);
	printf("3. 플레이어의 체력이 0이 되면, 스핑크스가 승리합니다.\n");
	SetCursorPosition(22, 25);
	printf("   반대로, 스핑크스의 체력이 0이 되면, 플레이어가 승리합니다.\n");
	SetCursorPosition(49, 30);
	printf("메뉴로 돌아가시겠습니까?\n");
	SetCursorPosition(51, 33);
	printf("1. 예       2. 아니오 \n");
	SetCursorPosition(54, 36);
	printf("{___     ___}");
}

void EndPrint()
{
	SetCursorVisible(0);
	SetCursorPosition(48, 21);
	printf("게임을 종료하시겠습니까? \n");
	SetCursorPosition(43, 23);
	printf("게임 진행 상황은 저장되지 않습니다. \n");
	SetCursorPosition(48, 26);
	printf("정말로 종료하시겠습니까?\n");
	SetCursorPosition(49, 29);
	printf("1. 예        2. 아니오  \n");
	SetCursorPosition(54, 36);
	printf("{___     ___}");
}


void GameoverPrint()
{
	SetCursorVisible(0);
	printf("\033[91m");
	SetCursorPosition(19, 3);
	printf(" .88888.                                   .88888.");
	SetCursorPosition(19, 4);
	printf("d8'   `88                                 d8'   `8b.");
	SetCursorPosition(19, 5);
	printf("88.d8888b. 88d8b.d8b..d8888b.  d8888b     88     88 dP   .dP .d8888b. 88d888b.");
	SetCursorPosition(19, 6);
	printf("88   YP88 88'  `88 88'`88'`88 88ooood8    88     88 88   d8' 88ooood8 88'  `88");
	SetCursorPosition(19, 7);
	printf("Y8.   .88 88.  .88 88  88  88 88.  ...    Y8.   .8P 88 .88'  88.  ... 88       ");
	SetCursorPosition(19, 8);
	printf(" `88888'  `88888P8 dP  dP  dP `88888P'     `8888P'  8888P'   `88888P' dP");
	SetCursorPosition(19, 9);
	printf("ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo");
	printf("\033[0m");
}


void GameoverGuid()
{
	SetCursorVisible(0);
	SetCursorPosition(12, 22);
	printf("당신은 스핑크스가 무엇을 지키고 있는지 알아내지 못한체, 스핑크스의 앞발에 밟혀 사망했습니다.\n");
	SetCursorPosition(48, 25);
	printf("메뉴로 돌아가시겠습니까?\n");
	SetCursorPosition(49, 28);
	printf("1. 예       2. 아니오 \n");
}

void GamewinPrint()
{
	SetCursorVisible(0);
	printf("\033[93m");
	SetCursorPosition(29, 3);
	printf("dP     dP dP  a88888b. d888888P  .88888.   888888ba  dP    dP \n");
	SetCursorPosition(29, 4);
	printf("88     88 88 d8'   `88    88    d8'   `8b  88    `8b Y8.  .8P \n");
	SetCursorPosition(29, 5);
	printf("88    .8P 88 88           88    88     88 a88aaaa8P'  Y8aa8P  \n");
	SetCursorPosition(29, 6);
	printf("88    d8' 88 88           88    88     88  88   `8b.    88    \n");
	SetCursorPosition(29, 7);
	printf(" 8b. .d8  88 Y8.   .88    88    Y8.   .8P  88     88    88    \n");
	SetCursorPosition(29, 8);
	printf("  8888'   dP  Y88888P'    dP     `8888P'   dP     dP    dP    \n");
	SetCursorPosition(29, 9);
	printf("oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
	printf("\033[0m");
}


void GamewinGuid()
{
	SetCursorVisible(0);
	SetCursorPosition(21, 22);
	printf("당신은 마침내 스핑크스를 무찌르고 스핑크스가 지키고 있던 보물을 손에 넣었습니다.\n");
	SetCursorPosition(38, 24);
	printf("그런데 이 많은 보물들을 어떻게 가져가죠?.\n");
	SetCursorPosition(48, 28);
	printf("메뉴로 돌아가시겠습니까?\n");
	SetCursorPosition(49, 31);
	printf("1. 예       2. 아니오 \n");
}


void footprint()
{
	SetCursorVisible(0);
	/*SetCursorPosition(40, 11);
	printf("                                                  .:-~      \n");
	SetCursorPosition(40, 12);
	printf("                                                ,  ,..      \n");
	SetCursorPosition(40, 13);
	printf("                                           .    .;          \n");
	SetCursorPosition(40, 14);
	printf("                                    . -.    *,  .           \n");
	SetCursorPosition(40, 15);
	printf("                                 -.. .;:                    \n");
	SetCursorPosition(40, 16);
	printf("                             ,~-,.~=-                       \n");
	SetCursorPosition(40, 17);
	printf("                       ~   ,:.                              \n");*/
	SetCursorPosition(40, 18);
	printf("                     .::   .;!,                             \n");
	SetCursorPosition(40, 19);
	printf("                     .::   .;!,                             \n");
	SetCursorPosition(40, 20);
	printf("                   :-;$,   ,=!.                             \n");
	SetCursorPosition(40, 21);
	printf("                  :$-..     ..                              \n");
	SetCursorPosition(40, 22);
	printf("                  ;~     .                                  \n");
	SetCursorPosition(40, 23);
	printf("          .,....    -$..                                    \n");
	SetCursorPosition(40, 24);
	printf("         ,*##~$;    ;$~:-                                   \n");
	SetCursorPosition(40, 25);
	printf("        -!!!#=:     :!$#=                                   \n");
	SetCursorPosition(40, 26);
	printf("      -:=-  ;-      -:$;~                                   \n");
	SetCursorPosition(40, 27);
	printf("     -=##-        -;=#:                                     \n");
	SetCursorPosition(40, 28);
	printf("     .---.        ;##~    .                                 \n");
	SetCursorPosition(40, 29);
	printf("           . .    ,,,                                       \n");
}


void Pyramid()
{
	SetCursorVisible(0);
	printf("\033[93m");
	SetCursorPosition(40, 2);
	printf("                  --\n");
	SetCursorPosition(40, 3);
	printf("               .~     :.\n");
	SetCursorPosition(40, 4);
	printf("                      ..\n");
	SetCursorPosition(40, 5);
	printf("            ,-           ;\n");
	SetCursorPosition(40, 6);
	printf("            ~             !\n");
	SetCursorPosition(40, 7);
	printf("          .         ======~~ \n");
	SetCursorPosition(40, 8);
	printf("         !                  ,~ \n");
	SetCursorPosition(40, 9);
	printf("        /\"                    .\n");
	SetCursorPosition(40, 10);
	printf("      - ----                  - \n");
	SetCursorPosition(40, 11);
	printf("     *                          -,\n");
	SetCursorPosition(40, 12);
	printf("    /""                         :!!\n");
	SetCursorPosition(40, 13);
	printf("  ,,                               ~ \n");
	SetCursorPosition(40, 14);
	printf(" .~                                 :.\n");
	SetCursorPosition(40, 15);
	printf(",_____________________________________\"\n");
	printf("\033[0m");
}
                                                            
void desert()
{
	SetCursorVisible(0);
	printf("\033[38;5;214m");
	SetCursorPosition(1, 1);
	printf(",,.................,.         \n");
	SetCursorPosition(1, 2);
	printf(",,,.................,,...                                                                                       \n");
	SetCursorPosition(1, 3);
	printf(",,,,,,,.................,..                                                                                     \n");
	SetCursorPosition(1, 4);
	printf(",,,,,,,,,.......................                                                                                \n");
	SetCursorPosition(1, 5);
	printf(",,,,,,,,..........................                                                                              \n");
	SetCursorPosition(1, 6);
	printf(",,,,,,,,..............................                      .                          .                        \n");
	SetCursorPosition(1, 7);
	printf(",,,,,,.........................,........                  .                          ..                      .  \n");
	SetCursorPosition(1, 8);
	printf(",,,,,,.......................................                         :~--~-   .                                \n");
	SetCursorPosition(1, 9);
	printf(",,,,,,,........................................                    .,:~--~~;,                                   \n");
	SetCursorPosition(1, 10);
	printf(",,,,,,,......................,...................                ,--~~~~~~;!,.   .                              \n");
	SetCursorPosition(1, 11);
	printf(",,,,,,,,.................,,,,,.,....................    .   ..,,------~~::;*-.  ...                             \n");
	SetCursorPosition(1, 12);
	printf(",,,,,,,,,.,.................,.,........................   ..,,,------~~::::*,.  .......                         \n");
	SetCursorPosition(1, 13);
	printf(",,,,,,,,,,,..................,...........................   .,,,----~~:::;*~...  ............              .        -\n");
	SetCursorPosition(1, 14);
	printf(",,,,,,,,,,,...................................................  ...-~::;;=-....   ...............  ...,~-,.,,,--~;;==\n");
	SetCursorPosition(1, 15);
	printf(",,,,,,,,,,,.....................................................       ....        ............,,........,-~;;:::~~:-\n");
	SetCursorPosition(1, 16);
	printf(",,,,,,,,,,........................................................                    ...................~;;~------~~\n");
	SetCursorPosition(1, 17);
	printf(",,,,,,,,,..........................................................     ..                ..............,-,--~~~~~:::\n");
	SetCursorPosition(1, 18);
	printf(",,,,,,,,,................................................... ......     .......       ...........,-~~~~~~~~~~:::::::;!\n");
	SetCursorPosition(1, 19);
	printf(",,,,,,,,,,...........................................................    .......,,,,,,------~~~~~~~~~~~~~~:::::::;;;;\n");
	SetCursorPosition(1, 20);
	printf(",,,,,,,,,,...........................................................    .......,,,,,--------~~~~~~~~~~:::::::;;;;!!!\n");
	SetCursorPosition(1, 21);
	printf(",,,,,,,,,,,,.....................................................   ..   .....,,,,,,,--------~~~~~~~~:::::::;;;;;!!!!\n");
	SetCursorPosition(1, 22);
	printf(",,,,,,,,,,,,,....................................................... .  ......,,,,,,--------~~~~~~~:::::::;;;;;!!!***\n");
	SetCursorPosition(1, 23);
	printf("----,,,,,,,,,,,,,,,,,,,,,,,,,,......................................,,,,,,,,,,,-------~~~~~~~::::::;;;;!!!!!!*******=\n");
	SetCursorPosition(1, 24);
	printf("-----,,,,,,,,,,,,,,,,,,,,,,,,,.................,,,,,,..............,,,,,,,,,,,--------~~~~~~::::;;;;;;!!!!!!!******==\n");
	SetCursorPosition(1, 25);
	printf("-------,,,,,,,,,,,,,,,,,,,,,,,.................,,,,,,..............,,,,,,,,,,---~-~~~~~~~~~:::;;;;;;;!!!!!!!******===\n");
	SetCursorPosition(1, 26);
	printf("---------,-,,,,,,,,,,,,,,,,,,.................,,,,.,.,...........,,,,,,,,,,,-,---~-~;:~~::~:::;;;;;;!!!!!!!******====\n");
	SetCursorPosition(1, 27);
	printf("-----------,-,,,-,,,,,,,,,.................,,,,,,...........,,,.,,,,,,-,,,,,-----:~;:~:::::::;;;;;;;;!!!!!!*******===\n");
	SetCursorPosition(1, 28);
	printf("----------------,,,,,,,,,,.................,,,,,..............,,,,,,,,,-,,-------:~~~:~:::::::;;;;;;!!!!!!*******====\n");
	SetCursorPosition(1, 29);
	printf("----------------,,,,,,,,,,,,,,....,............,,,,......,,.,,,,,,,,,-,,---,---::~~~~~::::::;;;;;;;;!!!!!*******=====\n");/*.17개 추가*/
	printf("\033[0m");
}



void IngameSphinx()
{
	SetCursorVisible(0);
	printf("\033[38;5;214m");
	SetCursorPosition(29, 1);
	printf("                             ..                             \n");
	SetCursorPosition(29, 2);
	printf("                          ,.~--,.,                          \n");
	SetCursorPosition(29, 3);
	printf("                       ,~,~~-,~-~~,~,                       \n");
	SetCursorPosition(29, 4);
	printf("                     .-~-,~--,,,~:,-~~.                     \n");
	SetCursorPosition(29, 5);
	printf("                     --~:.--,,,-~,,~~-,                     \n");
	SetCursorPosition(29, 6);
	printf("                    ~,,~~.,-~::-~.,~~,,:                    \n");
	SetCursorPosition(29, 7);
	printf("                    ~,.~~..~....~,,~-,~~                    \n");
	SetCursorPosition(29, 8);
	printf("                   ~~~.~~,,,~:;:,.-~:,:~~                   \n");
	SetCursorPosition(29, 9);
	printf("                  ;,~~~:,- .   .. ,,-~~~,,                  \n");
	SetCursorPosition(29, 10);
	printf("                  ,,,~~---:~;  ;~~--,~-,,,                  \n");
	SetCursorPosition(29, 11);
	printf("                 ~-,..--.:~*,~,;*~~.--,,,-~                 \n");
	SetCursorPosition(29, 12);
	printf("                ,~~~~~,.. .. ,~ ,. . ,-:~~~,                \n");
	SetCursorPosition(29, 13);
	printf("                ~~~~~~ ~    . .,    ~.~~~~~-                \n");
	SetCursorPosition(29, 14);
	printf("               .,,,;~~: .    ..    - ~~~;,,,.               \n");
	SetCursorPosition(29, 15);
	printf("              --,,,,,,;::   ;~~~   ~::,,,,.,~               \n");
	SetCursorPosition(29, 16);
	printf("              ,~~~;-,,,,,:  ,;;   ;,,,,,~~~~~,              \n");
	SetCursorPosition(29, 17);
	printf("               -~~-~~~~--~. .,,. -~~-~-~~~~~~               \n");
	SetCursorPosition(29, 18);
	printf("               .,,.,,--,:~ ,!;;!..-~,......,.               \n");
	SetCursorPosition(29, 19);
	printf("               .,,.,,--,:~ ,!;;!..-~,......,.               \n");
	SetCursorPosition(29, 20);
	printf("                -.-~~::---!-;;;;-!-~~:::;-.-                \n");
	SetCursorPosition(29, 21);
	printf("               :.   ,,,,,,!-;;;!-*,,,,,~   .~               \n");
	SetCursorPosition(29, 22);
	printf("              -~-   ,~;,,,~.;;;;.!,,-:~,  .-~-              \n");
	SetCursorPosition(29, 23);
	printf("              -.~-   :,:~-..;;;; ~~::,;   -~..              \n");
	SetCursorPosition(29, 24);
	printf("              ..--.  :-:;: .!;;! .;;:--  .-,.,              \n");
	SetCursorPosition(29, 25);
	printf("             ....~-  ,~-~: ,;;;;..:--~, .-~....             \n");
	SetCursorPosition(29, 26);
	printf("             -....~- ,~-;: .!;;;. ;:-~. -:....~             \n");
	SetCursorPosition(29, 27);
	printf("             .....,-, -:~, ,;;;;. ,-:- --......             \n");
	SetCursorPosition(29, 28);
	printf("              -.~-   :,:~-..;;;; ~~::,;   -~..              \n");
	SetCursorPosition(29, 29);
	printf("           ..............~---~---~~..............           \n");
	printf("\033[0m");
}


void SphinxLeftFoot()
{
	SetCursorVisible(0);
	printf("\033[38;5;214m");
	SetCursorPosition(12, 22);
	printf("      ~!!!;      .!!!!.     ,!!$!    \n");
	SetCursorPosition(12, 23);
	printf("     !-   .!,  4;:    !:   ;;    !:  \n");
	SetCursorPosition(12, 25);
	printf("    *       *. ;       ~; *       .~ \n");
	SetCursorPosition(12, 26);
	printf("   =         $:~        ~~         *.\n");
	SetCursorPosition(12, 27);
	printf("  .*         .@          $          ~\n");
	SetCursorPosition(12, 28);
	printf("  ,           :          $          $\n");
	SetCursorPosition(12, 29);
	printf("  ,$$$$$$$$$$$#$$$$$$$$$$@$$$$$$$$$$@\n");
	printf("\033[0m");

}

void SphinxRightFoot()
{
	SetCursorVisible(0);
	printf("\033[38;5;214m");
	SetCursorPosition(69, 22);
	printf("    ~!!!;      .!!!!.     ,!!$!    \n");
	SetCursorPosition(69, 23);
	printf("   !-   .!,  4;:    !:   ;;    !:  \n");
	SetCursorPosition(69, 25);
	printf("  *       *. ;       ~; *       .~ \n");
	SetCursorPosition(69, 26);
	printf(" =         $:~        ~~         *.\n");
	SetCursorPosition(69, 27);
	printf(".*         .@          $          ~\n");
	SetCursorPosition(69, 28);
	printf(",           :          $          $\n");
	SetCursorPosition(69, 29);
	printf(",$$$$$$$$$$$#$$$$$$$$$$@$$$$$$$$$$@\n");
	printf("\033[0m");

}


