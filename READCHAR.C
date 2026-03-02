#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char ch;

    clrscr();

    fp = fopen("example.txt", "r");

    if(fp == NULL)
    {
        printf("Cannot open file");
        exit(1);
    }

    printf("File contents:\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    getch();
}
