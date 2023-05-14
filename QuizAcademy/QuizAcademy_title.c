#include<stdio.h>
#include"QuizAcademy.h"
int print_title()
{
	char screen[500];

	int i= 0;
	while(i<450)
	{
		screen[i]=' ';
		i=i+1;
	}
	
	int a = 0;
	while(a<19)
	{
		int b= 0;
		while(b<60)
		{
			if(a==0||a==18)
			{
				screen[b]='_';
			}
			else if(b==0||b==59)
			{
				screen[b]='I';
			}
			else if(a==16)
			{
				screen[b]='_';	
			}
			/*"input(1~3)>"*/
			else if (a==17&&b==6)
			{
				screen[b]='i';
			}
			else if (a==17&&b==7)
			{
				screen[b]='n';
			}
			else if (a==17&&b==8)
			{
				screen[b]='p';
			}
			else if (a==17&&b==9)
			{
				screen[b]='u';
			}
			else if (a==17&&b==10)
			{
				screen[b]='t';
			}
			else if (a==17&&b==11)
			{
				screen[b]='(';
			}
			else if (a==17&&b==12)
			{
				screen[b]='1';
			}
			else if (a==17&&b==13)
			{
				screen[b]='~';
			}
			else if (a==17&&b==14)
			{
				screen[b]='3';
			}
			else if (a==17&&b==15)
			{
				screen[b]=')';
			}

			/*퀴즈 부분*/
			else if (a==4&&b==27)
			{
				screen[b]='Q';
			}
			else if (a==4&&b==29)
			{
				screen[b]='U';
			}
			else if (a==4&&b==31)
			{
				screen[b]='I';
			}
			else if (a==4&&b==33)
			{
				screen[b]='Z';
			}
			/*아카데미 부분*/
			else if (a==5&&b==24)
			{
				screen[b]='A';
			}
			else if (a==5&&b==26)
			{
				screen[b]='C';
			}
			else if (a==5&&b==28)
			{
				screen[b]='A';
			}
			else if (a==5&&b==30)
			{
				screen[b]='D';
			}
			else if (a==5&&b==32)
			{
				screen[b]='E';
			}
			else if (a==5&&b==34)
			{
				screen[b]='M';
			}
			else if (a==5&&b==36)
			{
				screen[b]='Y';
			}
			/*Game Start*/
			else if (a==10&&b==6)
			{
				screen[b]='1';
			}
			else if (a==10&&b==7)
			{
				screen[b]='.';
			}
			else if (a==10&&b==9)
			{
				screen[b]='G';
			}
			else if (a==10&&b==10)
			{
				screen[b]='a';
			}
			else if (a==10&&b==11)
			{
				screen[b]='m';
			}
			else if (a==10&&b==12)
			{
				screen[b]='e';
			}
			else if (a==10&&b==14)
			{
				screen[b]='S';
			}
			else if (a==10&&b==15)
			{
				screen[b]='t';
			}
			else if (a==10&&b==16)
			{
				screen[b]='a';
			}
			else if (a==10&&b==17)
			{
				screen[b]='r';
			}
			else if (a==10&&b==18)
			{
				screen[b]='t';
			}
			/*How To Play*/
			else if (a==12&&b==6)
			{
				screen[b]='2';
			}
			else if (a==12&&b==7)
			{
				screen[b]='.';
			}
			else if (a==12&&b==9)
			{
				screen[b]='H';
			}
			else if (a==12&&b==10)
			{
				screen[b]='o';
			}
			else if (a==12&&b==11)
			{
				screen[b]='w';
			}
			else if (a==12&&b==13)
			{
				screen[b]='T';
			}
			else if (a==12&&b==14)
			{
				screen[b]='o';
			}
			else if (a==12&&b==16)
			{
				screen[b]='P';
			}
			else if (a==12&&b==17)
			{
				screen[b]='l';
			}
			else if (a==12&&b==18)
			{
				screen[b]='a';
			}
			else if (a==12&&b==19)
			{
				screen[b]='y';
			}
			/*Exit*/
			else if (a==14&&b==6)
			{
				screen[b]='3';
			}
			else if (a==14&&b==7)
			{
				screen[b]='.';
			}
			else if (a==14&&b==9)
			{
				screen[b]='E';
			}
			else if (a==14&&b==10)
			{
				screen[b]='x';
			}
			else if (a==14&&b==11)
			{
				screen[b]='i';
			}
			else if (a==14&&b==12)
			{
				screen[b]='t';
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
		


	return 0;
	
}
