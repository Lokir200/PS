#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("enter the 3 sides\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if((a+b)>c && (a+c)>b && (b+c)>a){

printf("valid");
}else{
printf("not valid");
}
getch();
}