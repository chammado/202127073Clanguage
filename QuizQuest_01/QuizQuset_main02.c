#include <stdio.h>
#include "QuizQuest_screen.h"
#include <stdlib.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    char screen[120*40+1];
    int width = 120;
    int height = 40;
    int game = 1;
    int exit_loop = 1;
    int main_loop = 1;

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
        
            if (input == '3')
            {
                system("cls");
                title(screen, width, height);
                setTitle(screen,width,height);
                /*Sphinxs(screen,width,height);*/
                SphinxWrath(screen,width,height);
                setexit(screen,width,height);
                printf("%s\nPlease input: ", screen);
                scanf(" %c", &input);
                
                while (exit_loop)
                {
                    
                    // printf("%s\nPlease input: ", screen);
                    // scanf(" %c", &input);
                    clearInputBuffer(); // 입력 버퍼 비우기
                    if (input=='1')
                    {
                        game = 0;
                        break;
                    }
                                        
                    else if (input == '2')
                    {
                        system("cls");
                        title(screen, width, height);
                        setTitle(screen,width,height);
                        /*Sphinxs(screen,width,height);*/
                        SphinxWrath(screen,width,height);
                        menu(screen,width,height);
                        break;
                    }
                    else
                    {
                        system("cls");
                        title(screen, width, height);
                        setTitle(screen,width,height);
                        /*Sphinxs(screen,width,height);*/
                        SphinxWrath(screen,width,height);
                        setexit(screen,width,height);
                        printf("%s\nPlease input: ", screen);
                        scanf(" %c", &input);

                        exit_loop = 1;
                    }
                    
                    
                }
                
                continue;
            }
        	

        if (input == '2')
        {	
            system("cls");
            title(screen, width, height);
            sethow(screen, width, height);
            setTitle(screen, width, height);
            /*Sphinxs(screen, width, height);*/
            SphinxWrath(screen, width, height);
            printf("%s\nPlease input: ", screen);
            scanf(" %c", &input);

            while (main_loop)
            { 
                if (input == '0' || input >= '2')
                {     
                    system("cls");
                    title(screen, width, height);
                    sethow(screen, width, height);
                    setTitle(screen, width, height);
                    /*Sphinxs(screen, width, height);*/
                    SphinxWrath(screen, width, height);
                    printf("%s\nPlease input: ", screen);
                    scanf(" %c", &input);

                    main_loop = 1;
                }
                else if (input == '1')
                {
                    system("cls");
                    title(screen, width, height);
                    setTitle(screen, width, height);
                    /*Sphinxs(screen, width, height);*/
                    SphinxWrath(screen, width, height);
                    menu(screen, width, height);	
                    break;
                }
            }
            continue;
        }
    }    
    return 0;

}