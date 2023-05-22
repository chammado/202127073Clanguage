#include<stdio.h>
#include<windows.h>

int main(void)
{
        int i;

        for(i=0; i<=15; i++)
        {
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), i );
                printf("color\n");
        }
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 13 );
        printf("color\n");
}
