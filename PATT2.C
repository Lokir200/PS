#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("Enter star no\n");
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
 printf("*");
}
printf("\n");
}
getch();
}