#include "screen.h"
#include "ConsoleUtil.h"
#include <stdio.h>


void PrintBorder(char* screen, int width, int height)
{
    int w = 0;
    int h = 0;
    while (h < height)
    {
        while (w < width)
        {
            if (w == width - 1)
            {
                screen[w + (h * width)] = '\n';
            }
            else
            {
                if (w == 0 || w == width - 2)
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
}

void TextBar()
{
    SetCursorVisible(0);
    SetCursorPosition(1, 30);
    printf("_____________________________________________________________________________________________________________________");

}

void PlayingBorder()
{
    char screen[120 * 40 + 1];
    int width = 120;
    int height = 40;
    int game = 1;
    int exit_loop = 1;
    int main_loop = 1;

    SetCursorVisible(0);
    PrintBorder(screen, width, height);
    printf("%s", screen);
    TextBar();
    SetCursorPosition(20, 32);
}


void Intro_01()
{
    char screen[120 * 40 + 1];
    int width = 120;
    int height = 40;
    int game = 1;
    int exit_loop = 1;
    int main_loop = 1;

    SetCursorVisible(0);
    PrintBorder(screen, width, height);
    printf("%s", screen);
    TextBar();
    desert();
    SetCursorPosition(32, 32);
    printf("혼자 사막을 횡단하던 당신는 길을 잃고 조난을 당합니다. ");

}

void Intro_02()
{
    char screen[120 * 40 + 1];
    int width = 120;
    int height = 40;
    int game = 1;
    int exit_loop = 1;
    int main_loop = 1;

    SetCursorVisible(0);
    PrintBorder(screen, width, height);
    printf("%s", screen);
    TextBar();
    footprint();
    Pyramid();
    SetCursorPosition(21, 32);
    printf("당신은 길을 잃었지만 사막 한가운데에서 피라미드를 발견하고 홀린듯 그 안으로 걸어갑니다.");

}

void Intro_03()
{
    char screen[120 * 40 + 1];
    int width = 120;
    int height = 40;
    int game = 1;
    int exit_loop = 1;
    int main_loop = 1;

    SetCursorVisible(0);
    PrintBorder(screen, width, height);
    printf("%s", screen);
    TextBar();
    IngameSphinx();
    SphinxLeftFoot();
    SphinxRightFoot();
    SetCursorPosition(19, 32);
    printf("피라미드 안쪽에서 스핑크스를 마주쳤습니다. 매우 화가나 보이는 스핑크스가 말을 합니다.");
    SetCursorPosition(13, 34);
    printf("\"탐욕스러운 녀석이 또 들어왔군, 내가 내는 문제를 맞추지 못하면 살아돌아갈 생각은 하지마라!!!!!\"");

}


