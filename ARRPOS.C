#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[20],f,s;
clrscr();
printf("enter size of an array");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
f=a[0];
s=a[1];
for(i=0;i<n-2;i++)
{
a[i]=a[i+2];
}
a[n-2]=f;
a[n-1]=s;
printf("array after rotating left by two position");
for(i=0;i<n;i++)
{
printf("%d  ",a[i]);
}
getch();
}