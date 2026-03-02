#include<stdio.h>
#include<conio.h>
void main()
{
int n, i, a[20], max, temp;
clrscr();
printf("Enter the size: ");
scanf("%d", &n);
printf("Enter the elements:\n");
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
max = a[n-1];
a[n-1] = -1;
for(i = n-2; i >= 0; i--)
{
temp = a[i];
a[i] = max;
if(temp > max)
{
max = temp;
}
}
printf("\nArray after modification:\n");
for(i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
getch();
}