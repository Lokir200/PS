#include<stdio.h>
#include<conio.h>
void main(){
float num,bill,per;
clrscr();
printf("enter units \n");
scanf("%d",&num);
if(num<100){
bill=num*1;
}else if(num<300){
bill=num*1.5;
}
else
{
bill=num*2;
}
if(bill>500){
per=bill*0.05;
bill=bill+per;
}
printf("bill is %d \n",bill);
getch();
}