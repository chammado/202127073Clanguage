#include<stdio.h>
int main()
{
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
		


	return 0;
	
}
