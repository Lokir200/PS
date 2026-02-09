#include<stdio.h>
#include<conio.h>
float areaSquare(float side)
{
return side*side;
}
float areaRectangle(float l,float b)
{
return l*b;
}
void main()
{
float side,l,b;
clrscr();
printf("enter side of the square");
scanf("%f",&side);
printf("area of square=%2f\n",areaSquare(side));
printf("enter length of rectangle");
scanf("%f",&l);
printf("enter the breath of the rectangle");
scanf("%f",&b);
printf("Area of rectangle=%2f\n",areaRectangle(l,b));
getch();
}
