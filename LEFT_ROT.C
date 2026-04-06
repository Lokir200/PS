#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,temp,n;
clrscr();
printf("Enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
temp=a[0];
for(i=0;i<n-1;i++)
{
a[i]=a[i+1];
printf("the elements are %d\n",a[i+1]);
}
a[n]=temp;
printf("%d",temp);
getch();
}
