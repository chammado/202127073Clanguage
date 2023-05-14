#include <stdio.h>

int main()
{
        char screen[500];
        printf("  **\n");
        int i=0;
        while(i<450)
        {
                screen[i]=' ';
                i=i+1;
        }

        int b=0;
        while(b<15)
        {

                screen[2]='';
                screen[29]='';
                screen[30]='\0';
                printf("%s\n", screen);
                b=b+1;
        }
        printf("  **\n");
        return 0;
}
