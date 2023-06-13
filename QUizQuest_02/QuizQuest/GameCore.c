#include <stdio.h>
#include "GameCore.h"
#include "ConsoleUtil.h"
#include "screen.h"
#include "GameObjects.h"
#include "GameStart.h"
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS 

/*PrintBorder*/
//SetCursorPosition(0, 0);
//setTitle

int gameState;


void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void BeginGame(void)
{
	gameState = 0;

	SetCursorVisible(0);
}


void UpdateGame(void)
{
    char screen[120 * 40 + 1];
    int width = 120;
    int height = 40;
    int game = 1;
    int exit_loop = 1;
    int main_loop = 1;

    char input;
    SetCursorVisible(0);
    SetCursorPosition(0, 0);
    PrintBorder(screen, width, height);
    printf("%s", screen);
    setTitle();
    SubTitle();
    MenuPrint();
    TitleSphinx();
    while (game)
    {
        SetCursorVisible(0);
        SetCursorPosition(63, 36);
        scanf_s(" %c", &input, 50);

        if (input == '3')
        {
            system("cls");
            SetCursorPosition(0, 0);
            PrintBorder(screen, width, height);
            printf("%s", screen);
            setTitle();
            SubTitle();
            TitleSphinx();
            EndPrint();
            SetCursorPosition(60, 36);
            scanf_s(" %c", &input,50);

            while (exit_loop)
            {

                clearInputBuffer();
                if (input == '1')
                {
                    exit_loop = 0;
                    game = 0;
                    break;
                }
                else if (input == '2')
                {
                    system("cls");
                    SetCursorPosition(0, 0);
                    PrintBorder(screen, width, height);
                    printf("%s", screen);
                    setTitle();
                    SubTitle();
                    TitleSphinx();
                    MenuPrint();
                    break;
                }
                else
                {
                    system("cls");
                    PrintBorder(screen, width, height);
                    printf("%s", screen);
                    setTitle();
                    SubTitle();
                    TitleSphinx();

                    EndPrint();
                    SetCursorPosition(60, 36);
                    scanf_s(" %c", &input,50);

                    exit_loop = 1;
                }
            }

            continue;
        }


        if (input == '2')
        {
            system("cls");
            SetCursorPosition(0, 0);
            PrintBorder(screen, width, height);
            printf("%s", screen);
            setTitle();
            SubTitle();
            /*Sphinx();*/
            GuidePrint();
            Horus();
            SetCursorPosition(60, 36);
            scanf_s(" %c", &input,50);

            while (main_loop)
            {
                if (input == '0' || input >= '2')
                {
                    system("cls");
                    SetCursorPosition(0, 0);
                    PrintBorder(screen, width, height);
                    printf("%s", screen);
                    setTitle();
                    SubTitle();
                    /*Sphinx();*/
                    Horus();
                    GuidePrint();
                    SetCursorPosition(60, 36);
                    scanf_s(" %c", &input, 50);

                    main_loop = 1;
                }
                else if (input == '1')
                {
                    system("cls");
                    SetCursorPosition(0, 0);
                    PrintBorder(screen, width, height);
                    printf("%s", screen);
                    setTitle();
                    SubTitle();
                    TitleSphinx();
                    MenuPrint();
                    break;
                }
            }
            continue;
        }

        if (input == '1')
        {
            SetCursorVisible(0);
            system("cls");
            Intro_01();
            Sleep(5200);
            system("cls");
            Intro_02();
            Sleep(5200);
            system("cls");
            Intro_03();
            Sleep(5200);
            system("cls");
            playSphinxQuizGame();
        }
    }
}

    

void EndGame(void)
{
    
}