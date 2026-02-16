#include <stdio.h>
#include<conio.h>
void main()
{  int transactions[7] = {5, 3, 7, 2, 6, 4, 1};
    int i, j;
    clrscr();
    for(i = 0; i < 7; i++)
    {
        printf("Day%d: ", i + 1);

        for(j = 0; j < transactions[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    getch();
}

