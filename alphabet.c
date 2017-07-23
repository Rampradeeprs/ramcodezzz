#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter the character");
scanf("%s",&c);
if(c>='a' && c<='z'||c>='A' && c<='Z')
{
printf("it is a character");
}
else
{
printf("it is not a character");
}
}
