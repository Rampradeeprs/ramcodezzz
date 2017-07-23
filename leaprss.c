#include<stdio.h>
#include<conio.h>
void main()
{
int y;
printf("enter the year");
scanf("%d",&y);
if(y%400==0)
{
printf("is a leap year");
}
else
{
printf("is not a leap year");
}
}
