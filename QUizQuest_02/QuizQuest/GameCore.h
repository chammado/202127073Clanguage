#pragma once
#define _CRT_SECURE_NO_WARNINGS 
/* ���� ���� ����
 * 0 : Ÿ��Ʋ ȭ��
 * 1 : ���ΰ���
 * 2 : ��������
 */
int isGameRunning;

void clearInputBuffer();
void BeginGame(void);
void UpdateGame(void);
void EndGame(void);