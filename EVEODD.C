#include<stdio.h>
#include<conio.h>
void main(){
int a[30],i,j,k,even=0,odd=0,n;
clrscr();
printf("enter the number of elements \n");
scanf("%d",&n);
printf("enter the %d elements \n",n);
for(i=0;i<n;i++){
scanf("%d",a[i]);
if(a[i]%2==0){
even=even+1;
}else{
odd=odd+1;
}
}
printf("EVEN:");
for(j=0;j<even;j++){
printf("*");
}
printf("\n ODD:");
for(k=0;k<odd;k++){
printf("*");
}
getch();
}
