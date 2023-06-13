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
    printf("ȥ�� �縷�� Ⱦ���ϴ� ��Ŵ� ���� �Ұ� ������ ���մϴ�. ");

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
    printf("����� ���� �Ҿ����� �縷 �Ѱ������ �Ƕ�̵带 �߰��ϰ� Ȧ���� �� ������ �ɾ�ϴ�.");

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
    printf("�Ƕ�̵� ���ʿ��� ����ũ���� �����ƽ��ϴ�. �ſ� ȭ���� ���̴� ����ũ���� ���� �մϴ�.");
    SetCursorPosition(13, 34);
    printf("\"Ž�彺���� �༮�� �� ���Ա�, ���� ���� ������ ������ ���ϸ� ��Ƶ��ư� ������ ��������!!!!!\"");

}


