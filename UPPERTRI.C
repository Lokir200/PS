#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, n, mat[50][50];

    clrscr();

    printf("Enter order of square matrix: ");
    scanf("%d", &n);   // removed space after %d

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nUpper Triangle Matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j >= i)
                printf("%d ", mat[i][j]);
            else
                printf("  ");   // print space instead of newline
        }
        printf("\n");  // move to next row
    }

    getch();
}