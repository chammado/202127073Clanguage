#define _CRT_SECURE_NO_WARNINGS
#define _YUHAN_C_WINDOW_USER

#include<stdio.h>
#include <stdlib.h>
#include<time.h>

#ifdef _YUHAN_C_WINDOW_USER
#include<Windows.h>
#endif


/*
int main()
{
	time_t SJTstart;
	time(&SJTstart);
	
	int i = 0;

	while (i< 3)
	{	
		system("cls");
		printf("È£¿µÀÌ°¡ %d°¡ µ¿¾È »Ñ¿õ»Ñ¿õ ¹æ±Í¸¦ ²î¸é¼­ ÃãÀ» Ãá´Ù.......\n\n", i+1, (int)SJTstart);
		i = i + 1;
		Sleep(1000);
	}

	printf("few moments later\n\n");

	time_t SJTend;
	time(&SJTend);

	printf("¼öÁ¤ÀÌ´©³ª°¡ %dÃÊ¸¸Å­ È­¸¦³Â´Âµ¥ ÁöÁöÄ¡ ¾Ê°í ÀÖ´Ù.", (int)(SJTend - SJTstart));


	return 0;
}*/

int main(void)
{
	clock_t SJTstart;
	SJTstart = clock();

	int i = 0;

	while (i < 3)
	{
		/*system("cls"); */
		COORD pos = { 0,0 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		printf("È£¿µÀÌ°¡ %d°¡ µ¿¾È »Ñ¿õ»Ñ¿õ ¹æ±Í¸¦ ²î¸é¼­ ÃãÀ» Ãá´Ù.......\n\n", i + 1, (int)SJTstart);

		printf("¼öÁ¤ÀÌÀÇ ºÐ³ë : ");
		int j = 0;
		while (j < i)
		{
			printf("#");
			j = j + 1;
		}
		Sleep(100);
		i = i + 1;
	}

	printf("few moments later\n\n");

	clock_t SJTend;
	SJTend = clock;

	printf("¼öÁ¤ÀÌ´©³ª°¡ %dÃÊ¸¸Å­ È­¸¦³Â´Âµ¥ ÁöÁöÄ¡ ¾Ê°í ÀÖ´Ù.", (int)(SJTend - SJTstart));


	return 0;
}