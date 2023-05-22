#include "QuizQuest_screen.h"
#include <stdio.h>

int title(char* screen, int width, int height)
{
    int w = 0;
    int h = 0;
    while (h < height)
    {
        while (w < width)
        {
            if(w == width - 1)
            {
                screen[w + (h * width)] = '\n';
            }
            else
            {
                if(w == 0 || w == width - 2)
                {
                    screen[w + (h * width)] = 'I';
                }
                else if (h == 0)
                {
                    screen[w + (h * width)] = '-';
                }
                else if (h == height - 1)
                {
                    screen[w + (h * width)] = '_';
                }
                else
                {
                    screen[w + (h * width)] = ' ';
                }
            }
            w = w + 1;
        }
        w = 0;
        h = h + 1;
    }
    screen[height * width] = '\0';
    return 0;
}                        

int writeString(const char* string, char* screen, int width, int x, int y)
{
    int index = x + (y * width ); // 위치에 해당하는 인덱스 계산
    
    int i = 0;

    while (string[i] != '\0')
    {
        screen[index + i] = string[i];
        i++;
    }
    
    return 0;
}

int setTitle(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString(" .88888.            oo              .88888.                                dP   ", screen, width,20,3);
    writeString("d8'   `8b                          d8'   `8b                               88   ", screen, width, 20, 4);
    writeString("88     88  dP    dP dP d888888b    88     88  dP    dP .d8888b. .d8888b. d8888P ", screen, width, 20, 5);
    writeString("88  db 88  88    88 88    .d8P'    88  db 88  88    88 88ooood8 Y8ooooo.   88   ", screen, width, 20, 6);
    writeString("Y8.  Y88P  88.  .88 88  .Y8P       Y8.  Y88P  88.  .88 88.  ...       88   88   ", screen, width, 20, 7);
    writeString(" `8888PY8b `88888P' dP d888888P     `8888PY8b `88888P' `88888P' `88888P'   dP   ", screen, width, 20, 8);
    writeString("oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo", screen, width, 20, 9);  
}

int menu(char* screen, int width, int height)
{
    writeString("1. Game Start", screen, width,40,26);
    writeString("2. How to play?", screen, width,40,28);
    writeString("3. Exit", screen, width,40,30);
}

int SphinxWrath(char* screen, int width, int height)
{
    writeString(".---.     .             .        ,.   ,   ,.         .  .   ", screen, width,31,11);
    writeString("\\___  ,-. |-. . ,-. . , ' ,-.    `|  /|  /   ,-. ,-. |- |-. ", screen, width,31,12);
    writeString("    \\ | | | | | | |  X    `-.     | / | /    |   ,-| |  | | ", screen, width,31,13);
    writeString("`---' |-' ' ' ' ' ' ' `   `-'     `'  `'     '   `-^ `' ' ' ", screen, width,31,14);
    writeString("      |                                                     ", screen, width,31,15);
    writeString("      '                                                     ", screen, width,31,16);
}

int Sphinxs(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("                                    .                                      ", screen, width,49,21);
    writeString("                                  .,-  ~                                   ", screen, width,49,22);
    writeString("                                .  .  ,.-,                                 ", screen, width,49,23);
    writeString("                                      ...-,                                ", screen, width,49,24);
    writeString("                                ..   ,,..--.                               ", screen, width,49,25);
    writeString("                               ., , , ,..,-,                               ", screen, width,49,26);
    writeString("                              ..       ..,-..                              ", screen, width,49,27);
    writeString("                              ..      ...---                               ", screen, width,49,28);
    writeString("                              . .     ,.----,                              ", screen, width,49,29);
    writeString("                             ,,,.   . .,--~-,                              ", screen, width,49,30);
    writeString("                            ....,     .,----,.                             ", screen, width,49,31);
    writeString("                             ,  ..   ...-----                              ", screen, width,49,32);
    writeString("                             .,,,  ......--~.                              ", screen, width,49,33);
    writeString("                              . .   .....---.                              ", screen, width,49,34);
    writeString("                                      ....--.                              ", screen, width,49,35);
    writeString("                             .         ....--                              ", screen, width,49,36);
    writeString("                             ,          ,...,.                             ", screen, width,49,37);
    writeString("                                        -........,,,.,,,,,,,,,.,,          ", screen, width,49,38);
    writeString("                                        ,................,,,,,,,.          ", screen, width,49,39);
    writeString("                                        .........,,,,,,,,,,,.,,,,          ", screen, width,49,40);
    writeString("                                       ............................        ", screen, width,49,41);
    writeString("                                       .............................       ", screen, width,49,42);
    writeString("                                       .............................       ", screen, width,49,43);
    writeString("                                      ,...................,..,,.,,.,       ", screen, width,49,44);
    writeString("            .,,,,  ,,,,,,,,,,,,,.  ,,,--,--,........................       ", screen, width,49,45);
    writeString("                  ..............,      ,.......,,,,,...........,....,      ", screen, width,49,46);
    writeString("         ,        ,............,       ,...............,,,,,,,,......      ", screen, width,49,47);
    writeString("                 .,...-------,..   . , ,.............................      ", screen, width,49,48);
    writeString("          ,      .,......,---,.,     . ,.............,...............      ", screen, width,49,49);
    writeString("     ....,~,-,,,,~~~~~~~~~~~~~~,,,,,,-,~-------------~---------------~,,,,,", screen, width,49,50);    

}

int sethow(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("1. Our goal is to venture through the desert, obtain treasures,", screen, width, 5, 20);
    writeString("   and defeat the Sphinx through a battle of wits using quizzes.", screen, width, 5, 21);
    writeString("2. The Sphinx has 200 HP, while the player has 100 HP.", screen, width, 5, 23);
    writeString("3 If the player answers the riddle correctly, they deal 20 damage to the Sphinx.", screen, width, 5, 25); 
    writeString("  However, if the player fails to answer correctly, they suffer 25 damage.", screen, width, 5, 26);
    writeString("4. If the player's HP reaches 0, the Sphinx wins. ", screen, width, 5, 28); 
    writeString("   Conversely, if the Sphinx's HP reaches 0, the player emerges victorious.", screen, width, 5, 29);
    writeString("Return to menu?", screen, width, 47, 33);
    writeString("1.Yes      2.No", screen, width, 47, 34); 
}

int setexit(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("Are you sure you want to quit the game?", screen, width, 40, 24);  
    writeString("      Game progress is not saved.      ", screen, width, 40, 26); 
    writeString("      Do you really want to quit?      ", screen, width, 40, 28);
    writeString("          1.Yes        2.No            ", screen, width, 40, 30);  
}