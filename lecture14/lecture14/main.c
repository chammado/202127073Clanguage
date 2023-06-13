#include <stdio.h>
#include <Windows.h> 

void PrintTitle();
void printMainGame();
void GotoPos(int x, int y);/*콘솔 좌표 이동해주는 함수*/
void SetCursorVisible(int isVisible);

/*텍스트 색상 변경*/

void BeginGame();
void UpdateGme();
void EndGame();

int gameState;


int main()
{

	BeginGame();
	
	while (gameState)
	{
		UpdateGme();
	}

	EndGame();

	return 0;

}

void printTitle()
{
	GotoPos(0, 0);
	printf("#########################\n");
	printf("#     강의 하기 싫어    #\n");
	printf("#                       #\n");
	printf("#                       #\n");
	printf("#                       #\n");
	printf("#                       #\n");
	printf("#    1. 게임시작        #\n");
	printf("#    2. 게임종료        #\n");
	printf("#                       #\n");
	printf("#                       #\n");
	printf("#########################\n");

}


void printMainGame()
{
	GotoPos(0, 0);
	printf("#########################\n");
	printf("#     강의 하기 싫어22  #\n");
	printf("#                       #\n");
	printf("#                       #\n");
	printf("#                       #\n");
	printf("#                       #\n");
	printf("#    \033[32m1. 게임시작\033[0m         #\n");
	printf("#    2. 하지말라고      #\n");
	printf("#                       #\n");
	printf("#                       #\n");
	printf("#########################\n");
	Sleep(1000);

	GotoPos(15, 2);
	printf("+");
	Sleep(1000);
}

void GotoPos(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetCursorVisible(int isVisible)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = isVisible;
	cursorInfo.dwSize = 1;
	SetConsoleCursorinfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}


void BeginGame()
{
	gameState = 2;
	SetCursorVisible(0);

}

void UpdateGme()
{

	if (gameState == 1)
	{
		printMainGame();
		gameState = 0;
	}
	else if (gameState == 2)
	{
		printTitle();
		char gameInput = '0';
		gameInput = getch();

		if (gameInput == '1')
		{
			gameState = 1;
		}

		if (gameInput == '2')
		{
			gameState = 0;
		}
	}

}

void EndGame()
{

}


