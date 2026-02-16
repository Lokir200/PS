#include <stdio.h>
#include<conio.h>
void main()
{
    int marks[50];
    int i,n;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    clrscr();
    printf("Enter number of students \n");
    scanf("%d",&n);
    printf("Enter marks of %d students (0-100):\n",n);

    for(i = 0; i < n; i++)
    {
	scanf("%d", &marks[i]);

	if(marks[i] >= 0 && marks[i] <= 40)
	    c1++;
	else if(marks[i] <= 60)
	    c2++;
	else if(marks[i] <= 80)
	    c3++;
	else if(marks[i] <= 100)
	    c4++;
	else
	    printf("Invalid mark entered!\n");
    }

    printf("\nHistogram:\n");

    printf("0-40   : ");
    for(i = 0; i < c1; i++)
	printf("*");

    printf("\n41-60  : ");
    for(i = 0; i < c2; i++)
	printf("*");

    printf("\n61-80  : ");
    for(i = 0; i < c3; i++)
	printf("*");

    printf("\n81-100 : ");
    for(i = 0; i < c4; i++)
	printf("*");

      getch();
}

