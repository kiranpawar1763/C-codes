/*write a c program to find the previous multiple of 100 
of given three digit number 1s 234 and the output is 200*/
#include<stdio.h>
int main()
{
int num ,mul;
printf("\nEnter the number");
scanf("%d",&num);
 mul=(num/100)*100;
 printf("\n%d",mul);
 return 0;
}