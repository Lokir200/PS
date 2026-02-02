#include<stdio.h>
#include<stdlib.h>
int main(){
int n,m,q,num1,num2,d1,d2;
q=n/m;
num1=q*m;
num2=(q+1)*m;
d1=abs(n-num1);
d2=abs(n-num2);
if(d1<d2)
{
printf("%d",num1);
}
else if(d2<d1){
printf("%d",num2);
}
else
{
printf("%d",(abs(num1)>abs(num2))?num1:num2);
}
return 0;
}
