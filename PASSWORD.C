#include<stdio.h>
#include<string.h>
int validatePassword(char pwd[])
{
if(strlen(pwd)>=8)
return 1;
else
return 0;
}
void main()
{
char password[50];
printf("enter password");
scanf("%s",password);
if(validatePassword(password))
printf("Password is valid");
else
printf("Password is invalid");
getch();
}