#include<stdio.h>
#include<conio.h>
void main(){
int i,n;
clrscr();
printf("enter n:\n");
scanf("%d",&n);
printf("the factors of %d are:\n",n);
for(i=1;i<=n;i++)
{ if(n%i==0)
{
printf("%d ",i);
}
getch();
}