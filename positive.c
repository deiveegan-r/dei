#include<stdio.h>
int main()
{
int number;
scanf("%d",&number);
if (number <= 0)
{
if (number==0)
printf("the entered num is zero");
else
printf("the entered a number is negative ");
}
else
printf("the number entered is positive ");
return 0;
}
