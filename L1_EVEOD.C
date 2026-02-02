#include<stdio.h>
#include<conio.h>
void main(){
int num,digit,even=0,odd=0,i;
clrscr();
printf("enter value \n");
scanf("%d",&num);
if(num<1000 || num>9999){
printf("invalid");
}
for(i=0;i<=3;i++){
digit=num%10;
if(digit%2==0){
even++;
}
else
{
odd++;
}
num=num/10;
}
printf("even digits are %d \n",even);
printf("odd digits are %d \n",odd);
getch();
}