#pragma once
#define _CRT_SECURE_NO_WARNINGS 
/* 게임 상태 변수
 * 0 : 타이틀 화면
 * 1 : 메인게임
 * 2 : 게임종료
 */

void clearInputBuffer();
void BeginGame(void);
void UpdateGame(void);
