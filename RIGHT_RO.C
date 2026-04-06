#include<stdio.h>
#include<conio.h>
void main()
{
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
int k = 2;
int i, j, last;
k = k % n;
for(i = 0; i < k; i++)
{
last = arr[n - 1];
}
for(j = n - 1; j > 0; j--) {
arr[j] = arr[j - 1];
}
arr[0] = last;
printf("Rotated array: ");
for(i = 0; i < n; i++)  ;
{
printf("%d ", arr[i]);
}
getch();
}
