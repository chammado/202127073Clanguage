#include <stdio.h>
#include "QuizQuest_screen.h"
#include <stdlib.h>

int main()
{
    char screen[120*40+1];
    int width = 120;
    int height = 40;
    int game = 1;

    char input;
    title(screen, width, height);
    setTitle(screen,width,height);
    /*Sphinxs(screen,width,height);*/
    SphinxWrath(screen,width,height);
    menu(screen,width,height);
    system("cls");

    while(game)
    {
        printf("%s\nPlease input: ", screen);
        scanf(" %c", &input);

        if(input == '2')
        {
            system("cls");
            title(screen, width, height);
            sethow(screen,width,height);
            setTitle(screen,width,height);
            /*Sphinxs(screen,width,height);*/
            SphinxWrath(screen,width,height);

            printf("%s\nPlease input: ", screen);
            scanf(" %c", &input);
            
            if(input == '1')
            {
                system("cls");
                title(screen, width, height);
                setTitle(screen,width,height);
                /*Sphinxs(screen,width,height);*/
                SphinxWrath(screen,width,height);
                menu(screen,width,height);
            }
            else if(input == '2')
            {
                system("cls");
                setTitle(screen,width,height);
                /*Sphinxs(screen,width,height);*/
                SphinxWrath(screen,width,height);
                title(screen, width, height);
                sethow(screen,width,height);
            }
        }
        else if(input == '3')
        {
            system("cls");
            title(screen, width, height);
            setTitle(screen,width,height);
            /*Sphinxs(screen,width,height);*/
            SphinxWrath(screen,width,height);
            setexit(screen,width,height);

            printf("%s\nPlease input: ", screen);
            scanf(" %c", &input);

            if(input == '1')
            {
                game = 0;
            }
            else if(input == '2')
            {
                system("cls");
                setTitle(screen,width,height);
                /*Sphinxs(screen,width,height);*/
                SphinxWrath(screen,width,height);
                title(screen, width, height);
                setexit(screen,width,height);

            }
        }
    }

    return 0;
}

