#include<stdio.h>
int print_title_screen()
{
	printf("##########################################################\n");
	printf("##########################################################\n");
	printf("##                                                      ##\n");
	printf("##                        DINO RUN                      ##\n");
	printf("##                         -vo.1-       	        ##\n");
	printf("##                                                      ##\n");
	printf("##                                                      ##\n");
	printf("##                                                      ##\n");
	printf("##                    1. Game Start                     ##\n");
	printf("##                    2. How To Play  	                ##\n");
	printf("##                    3. Exit                           ##\n");
	printf("##                                                      ##\n");
	printf("##                                                      ##\n");
	printf("##                                                      ##\n");
	printf("##########################################################\n");
	printf("##########################################################\n\n\n");
	return 0;
}

int print_howtoplay()
{
	printf("##########################################################\n");
	printf("##########################################################\n");
	printf("##                                                      ##\n");
	printf("##                        DINO RUN                      ##\n");
	printf("##                         -vo.1-       	        ##\n");
	printf("##                                                      ##\n");
	printf("##                                                      ##\n");
	printf("##                                                      ##\n");
	printf("##  1. To make the dino jump, press the space bar       ##\n");
	printf("##  2. If the dino hits an obstacle, the game will end  ##\n");
	printf("##                                                      ##\n");
	printf("##                                                      ##\n");
	printf("##                                                      ##\n");
	printf("##                                                      ##\n");
	printf("##########################################################\n");
	printf("##########################################################\n\n\n");
	


	return 0;
}
			


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
