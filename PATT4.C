#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k,l;
clrscr();
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
for(k=n;k>1;k--)
{
for(l=1;l<=k;l++)
{
printf("*");
}
printf("\n");
}
getch();
}