#include<stdio.h>
#include<conio.h>
void main(){
int n,res;
clrscr();
printf("enter the dice face \n");
scanf("%d",&n);
if(0<n && n<7){
res=7-n;
printf("the upper face number is %d",res);
}else{
printf("not possible");
}
getch();
}
