#include<stdio.h>
int main()
{	
	/*
	char screen[500];
	int i = 0;
		
	while(i<500)
	{
		screen[i]='0';
		i=i+1;
	}
	screen[30]='\n';
	screen[61]='\n';
	screen[92]='\n';
	screen[123]='\n';
	screen[154]='\n';
	screen[185]='\n';
	screen[216]='\n';
	screen[247]='\n';
	screen[278]='\n';
	screen[309]='\n';
	screen[340]='\n';
	screen[371]='\n';
	screen[402]='\n';
	screen[433]='\n';
	screen[464]='\0';
	printf("%s",screen);
	*/


	char screen[500];
	
        int i= 0;
        while(i<450)
        {
                screen[i]=' ';
                i=i+1;
        }

        int a = 0;
        while(a<15)
        {
                int b= 0;
                while(b<30)
                {
                        if(a==0||a==14)
                        {
                                screen[b]='*';
                        }
                        else if(b==0||b==29)
                        {
                                screen[b]='*';
                        }
                        else
                        {
                                screen[b]=' ';
                        }
                        b=b+1;
                }
                screen[60]='\0';
                printf("%s\n", screen);
                a=a+1;
        }
	
	


	/*
	char hero[20]; 
	char heroin[20];
	char boss[20];
	printf("남주인공 이름 : ");
	fflush(stdout);
	scanf("%s",hero);
	printf("여주인공 이름 : ");
	fflush(stdout);
	scanf("%s",heroin);
	printf("보스 이름 : ");
	fflush(stdout);
	scanf("%s", boss);
	

	printf("\n\n\t****** 난 니가 싫어 ******\n\n\n");
	printf("%s는 %s에게 고백을 했다.\n",hero, heroin);
	printf("%s가 %s의 뺨을 쎄게 때렸다....",boss, hero);
	*/
	
	return 0;
}
