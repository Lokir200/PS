#include<stdio.h>
#include<conio.h>
void main()
{
int n,a1[20],a2[20],i,j;
clrscr();
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a1[i]);
for(i=0;i<n;i++)
{
for(j=i;j>=0;j--)
{
if(i==0)
{
a2[i]=a1[i];
}
else
{
a2[i]=a1[i]+a1[j-1];
}
}
}
printf("prefix sum array is ");
for(i=0;i<n;i++);
printf("%d",a2[i]);
getch();
}