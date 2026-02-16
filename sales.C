#include <stdio.h>
#include<conio.h>
void main()
{

    int n, category;
    int freq[6] = {0};
    int i, j;
    clrscr();

    printf("Enter number of days: ");
    scanf("%d", &n);

    printf("Enter sales category (1-5) for each day:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &category);

        if(category >= 1 && category <= 5)
            freq[category]++;
        else
            printf("Invalid category!\n");
    }

    printf("\nSales Histogram:\n");

    for(i = 1; i <= 5; i++)
    {
        printf("Category %d: ", i);
        for(j = 0; j < freq[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
}