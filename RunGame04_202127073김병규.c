#include "dino_screen.h"
#include<stdio.h>
#include<stdlib.h>
		


int main()
{	
	print_title_screen();
	int main_loop = 1;
	int howplay = 1;
    int game_state = 1;
	int input = 0;
	while(game_state)
	{	
		printf("input(1~3)>");
		scanf("%d",&input);
		if(input==3)
		{
			game_state=0;
		}
		if(input==2)
		{	

			print_howtoplay();
			printf("Return to menu?(1.yes 2.no)>");
			scanf("%d",&input);

			while (main_loop)
			{ 
				if (input==2)
					{
			
						print_howtoplay();				
			       			printf("Return to menu?(1.yes 2.no)>");
			   		 	scanf("%d",&input);
						main_loop=1;
					}

				if(input == 0 || input>2)
					{     
						
						print_howtoplay();
						printf("Return to menu?(1.yes 2.no)>");
			   		 	scanf("%d",&input);
						main_loop=1;
					}
				if(input==1)
			    	{
			           
					    print_title_screen();				
					    break;
					}
					continue;
			}
			
		}
	
    }
		
	return 0;
}
