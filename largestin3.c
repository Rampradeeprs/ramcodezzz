#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("enter the elements of n1 n2 n3");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2 || n1>n3)
{
printf("n1 is largest number");
}
if(n2>n1 || n2>n3)
{
printf("n2 is the largest number");
}
if(n3>n1 || n3>n2)
{
printf("n3 is the largest number");
}
}
