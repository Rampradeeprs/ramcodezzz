#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3;
printf("enter the numbers")
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2 && num1>num3)
{
printf("num1 is largest number");
}
if(num2>num1 && num2>num3)
{
printf("num2 is largest number");
}
if(num3>num1 && num3>num2)
{
printf("num 3 is lagest number");
}
}
