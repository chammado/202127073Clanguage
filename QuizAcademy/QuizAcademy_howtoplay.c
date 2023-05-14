#include<stdio.h>
#include"QuizAcademy.h"
int print_howtoplay()
{
	char screen[10000];
	
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
			/*Return to menu?(1.yes 2.no)*/
			else if (a==17&&b==6)
			{
				screen[b]='R';
			}
			else if (a==17&&b==7)
			{
				screen[b]='e';
			}
			else if (a==17&&b==8)
			{
				screen[b]='t';
			}
			else if (a==17&&b==9)
			{
				screen[b]='u';
			}
			else if (a==17&&b==10)
			{
				screen[b]='r';
			}
			else if (a==17&&b==11)
			{
				screen[b]='n';
			}
			else if (a==17&&b==13)
			{
				screen[b]='t';
			}
			else if (a==17&&b==14)
			{
				screen[b]='o';
			}
			else if (a==17&&b==16)
			{
				screen[b]='m';
			}
			else if (a==17&&b==17)
			{
				screen[b]='e';
			}
			else if (a==17&&b==18)
			{
				screen[b]='n';
			}
			else if (a==17&&b==19)
			{
				screen[b]='u';
			}
			else if (a==17&&b==20)
			{
				screen[b]='?';
			}
			else if (a==17&&b==21)
			{
				screen[b]='(';
			}
			else if (a==17&&b==22)
			{
				screen[b]='1';
			}
			else if (a==17&&b==23)
			{
				screen[b]='.';
			}
			else if (a==17&&b==25)
			{
				screen[b]='y';
			}
			else if (a==17&&b==26)
			{
				screen[b]='e';
			}
			else if (a==17&&b==27)
			{
				screen[b]='s';
			}
			else if (a==17&&b==29)
			{
				screen[b]='2';
			}
			else if (a==17&&b==30)
			{
				screen[b]='.';
			}
			else if (a==17&&b==32)
			{
				screen[b]='n';
			}
			else if (a==17&&b==33)
			{
				screen[b]='o';
			}
			else if (a==17&&b==34)
			{
				screen[b]=')';
			}

			/*Quiz*/
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

			/*Academy*/
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

			/*1. After"*/
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
				screen[b]='A';
			}
			else if (a==10&&b==10)
			{
				screen[b]='f';
			}
			else if (a==10&&b==11)
			{
				screen[b]='t';
			}
			else if (a==10&&b==12)
			{
				screen[b]='e';
			}
			else if (a==10&&b==13)
			{
				screen[b]='r';
			}

			/*selecting*/
			else if (a==10&&b==15)
			{
				screen[b]='s';
			}
			else if (a==10&&b==16)
			{
				screen[b]='e';
			}
			else if (a==10&&b==17)
			{
				screen[b]='l';
			}
			else if (a==10&&b==18)
			{
				screen[b]='e';
			}
			else if (a==10&&b==19)
			{
				screen[b]='c';
			}
			else if (a==10&&b==20)
			{
				screen[b]='t';
			}
			else if (a==10&&b==21)
			{
				screen[b]='i';
			}
			else if (a==10&&b==22)
			{
				screen[b]='n';
			}
			else if (a==10&&b==23)
			{
				screen[b]='g';
			}

			/*the number*/
			else if (a==10&&b==25)
			{
				screen[b]='t';
			}
			else if (a==10&&b==26)
			{
				screen[b]='h';
			}
			else if (a==10&&b==27)
			{
				screen[b]='e';
			}
			else if (a==10&&b==29)
			{
				screen[b]='n';
			}
			else if (a==10&&b==30)
			{
				screen[b]='u';
			}
			else if (a==10&&b==31)
			{
				screen[b]='m';
			}
			else if (a==10&&b==32)
			{
				screen[b]='b';
			}
			else if (a==10&&b==33)
			{
				screen[b]='e';
			}
			else if (a==10&&b==34)
			{
				screen[b]='r';
			}

			/*corresponding */
			else if (a==10&&b==36)
			{
				screen[b]='c';
			}
			else if (a==10&&b==37)
			{
				screen[b]='o';
			}
			else if (a==10&&b==38)
			{
				screen[b]='r';
			}
			else if (a==10&&b==39)
			{
				screen[b]='r';
			}
			else if (a==10&&b==40)
			{
				screen[b]='e';
			}
			else if (a==10&&b==41)
			{
				screen[b]='s';
			}
			else if (a==10&&b==42)
			{
				screen[b]='p';
			}
			else if (a==10&&b==43)
			{
				screen[b]='o';
			}
			else if (a==10&&b==44)
			{
				screen[b]='n';
			}
			else if (a==10&&b==45)
			{
				screen[b]='d';
			}
			else if (a==10&&b==46)
			{
				screen[b]='i';
			}
			else if (a==10&&b==47)
			{
				screen[b]='n';
			}
			else if (a==10&&b==48)
			{
				screen[b]='g';
			}

			/*to the*/
			else if (a==11&&b==9)
			{
				screen[b]='t';
			}
			else if (a==11&&b==10)
			{
				screen[b]='o';
			}
			else if (a==11&&b==12)
			{
				screen[b]='t';
			}
			else if (a==11&&b==13)
			{
				screen[b]='h';
			}
			else if (a==11&&b==14)
			{
				screen[b]='e';
			}

			/*desired genre,*/
			else if (a==11&&b==16)
			{
				screen[b]='d';
			}
			else if (a==11&&b==17)
			{
				screen[b]='e';
			}
			else if (a==11&&b==18)
			{
				screen[b]='s';
			}
			else if (a==11&&b==19)
			{
				screen[b]='i';
			}
			else if (a==11&&b==20)
			{
				screen[b]='r';
			}
			else if (a==11&&b==21)
			{
				screen[b]='e';
			}
			else if (a==11&&b==22)
			{
				screen[b]='d';
			}
			else if (a==11&&b==24)
			{
				screen[b]='g';
			}
			else if (a==11&&b==25)
			{
				screen[b]='e';
			}
			else if (a==11&&b==26)
			{
				screen[b]='n';
			}
			else if (a==11&&b==27)
			{
				screen[b]='r';
			}
			else if (a==11&&b==28)
			{
				screen[b]='e';
			}
			else if (a==11&&b==29)
			{
				screen[b]=',';
			}

			/*the quiz*/
			else if (a==11&&b==31)
			{
				screen[b]='t';
			}
			else if (a==11&&b==32)
			{
				screen[b]='h';
			}
			else if (a==11&&b==33)
			{
				screen[b]='e';
			}
			else if (a==11&&b==35)
			{
				screen[b]='q';
			}
			else if (a==11&&b==36)
			{
				screen[b]='u';
			}
			else if (a==11&&b==37)
			{
				screen[b]='i';
			}
			else if (a==11&&b==38)
			{
				screen[b]='z';
			}

			/*will commence.*/
			else if (a==11&&b==40)
			{
				screen[b]='w';
			}
			else if (a==11&&b==41)
			{
				screen[b]='i';
			}
			else if (a==11&&b==42)
			{
				screen[b]='l';
			}
			else if (a==11&&b==43)
			{
				screen[b]='l';
			}
			else if (a==11&&b==45)
			{
				screen[b]='c';
			}
			else if (a==11&&b==46)
			{
				screen[b]='o';
			}
			else if (a==11&&b==47)
			{
				screen[b]='m';
			}
			else if (a==11&&b==48)
			{
				screen[b]='m';
			}
			else if (a==11&&b==49)
			{
				screen[b]='e';
			}
			else if (a==11&&b==50)
			{
				screen[b]='n';
			}
			else if (a==11&&b==51)
			{
				screen[b]='c';
			}
			else if (a==11&&b==52)
			{
				screen[b]='e';
			}
			else if (a==11&&b==53)
			{
				screen[b]='.';
			}

			/*2. Your grade*/
			else if (a==13&&b==6)
			{
				screen[b]='2';
			}
			else if (a==13&&b==7)
			{
				screen[b]='.';
			}
			else if (a==13&&b==9)
			{
				screen[b]='Y';
			}
			else if (a==13&&b==10)
			{
				screen[b]='o';
			}
			else if (a==13&&b==11)
			{
				screen[b]='u';
			}
			else if (a==13&&b==12)
			{
				screen[b]='r';
			}
			else if (a==13&&b==14)
			{
				screen[b]='g';
			}
			else if (a==13&&b==15)
			{
				screen[b]='r';
			}
			else if (a==13&&b==16)
			{
				screen[b]='a';
			}
			else if (a==13&&b==17)
			{
				screen[b]='d';
			}
			else if (a==13&&b==18)
			{
				screen[b]='e';
			}

			/*is determined*/
			else if (a==13&&b==20)
			{
				screen[b]='i';
			}
			else if (a==13&&b==21)
			{
				screen[b]='s';
			}
			else if (a==13&&b==23)
			{
				screen[b]='d';
			}
			else if (a==13&&b==24)
			{
				screen[b]='e';
			}
			else if (a==13&&b==25)
			{
				screen[b]='t';
			}
			else if (a==13&&b==26)
			{
				screen[b]='e';
			}
			else if (a==13&&b==27)
			{
				screen[b]='r';
			}
			else if (a==13&&b==28)
			{
				screen[b]='m';
			}
			else if (a==13&&b==29)
			{
				screen[b]='i';
			}
			else if (a==13&&b==30)
			{
				screen[b]='n';
			}
			else if (a==13&&b==31)
			{
				screen[b]='e';
			}
			else if (a==13&&b==32)
			{
				screen[b]='d';
			}

			/*based on the*/
			else if (a==13&&b==34)
			{
				screen[b]='b';
			}
			else if (a==13&&b==35)
			{
				screen[b]='a';
			}
			else if (a==13&&b==36)
			{
				screen[b]='s';
			}
			else if (a==13&&b==37)
			{
				screen[b]='e';
			}
			else if (a==13&&b==38)
			{
				screen[b]='d';
			}
			else if (a==13&&b==40)
			{
				screen[b]='o';
			}
			else if (a==13&&b==41)
			{
				screen[b]='n';
			}
			else if (a==13&&b==43)
			{
				screen[b]='t';
			}
			else if (a==13&&b==44)
			{
				screen[b]='h';
			}
			else if (a==13&&b==45)
			{
				screen[b]='e';
			}

			/*number of*/
			else if (a==13&&b==47)
			{
				screen[b]='n';
			}
			else if (a==13&&b==48)
			{
				screen[b]='u';
			}
			else if (a==13&&b==49)
			{
				screen[b]='m';
			}
			else if (a==13&&b==50)
			{
				screen[b]='b';
			}
			else if (a==13&&b==51)
			{
				screen[b]='e';
			}
			else if (a==13&&b==52)
			{
				screen[b]='r';
			}
			else if (a==13&&b==54)
			{
				screen[b]='o';
			}
			else if (a==13&&b==55)
			{
				screen[b]='f';
			}

			/*quiz questions*/
			else if (a==14&&b==9)
			{
				screen[b]='q';
			}
			else if (a==14&&b==10)
			{
				screen[b]='u';
			}
			else if (a==14&&b==11)
			{
				screen[b]='i';
			}
			else if (a==14&&b==12)
			{
				screen[b]='z';
			}

			/*you answer*/
			else if (a==14&&b==14)
			{
				screen[b]='y';
			}
			else if (a==14&&b==15)
			{
				screen[b]='o';
			}
			else if (a==14&&b==16)
			{
				screen[b]='u';
			}
			else if (a==14&&b==18)
			{
				screen[b]='a';
			}
			else if (a==14&&b==19)
			{
				screen[b]='n';
			}
			else if (a==14&&b==20)
			{
				screen[b]='s';
			}
			else if (a==14&&b==21)
			{
				screen[b]='w';
			}
			else if (a==14&&b==22)
			{
				screen[b]='e';
			}
			else if (a==14&&b==23)
			{
				screen[b]='r';
			}

			/*correctly.*/
			else if (a==14&&b==25)
			{
				screen[b]='c';
			}
			else if (a==14&&b==26)
			{
				screen[b]='o';
			}
			else if (a==14&&b==27)
			{
				screen[b]='r';
			}
			else if (a==14&&b==28)
			{
				screen[b]='r';
			}
			else if (a==14&&b==29)
			{
				screen[b]='e';
			}
			else if (a==14&&b==30)
			{
				screen[b]='c';
			}
			else if (a==14&&b==31)
			{
				screen[b]='t';
			}
			else if (a==14&&b==32)
			{
				screen[b]='l';
			}
			else if (a==14&&b==33)
			{
				screen[b]='y';
			}
			else if (a==14&&b==34)
			{
				screen[b]='.';
			}
			else
			{
				screen[b]=' ';
			}
			b=b+1;
		}
		printf("%s\n", screen);
		a=a+1;
	}
		


	return 0;
	
}

