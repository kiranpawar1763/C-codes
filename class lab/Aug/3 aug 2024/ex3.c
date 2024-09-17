// write the c program to find the next multiple of 10
// input = 56  output=60
#include<stdio.h>
int main()
{
    int num ,mul;
printf("\nEnter the number  ");
scanf("%d",&num);
 mul=(num%10)*10;
 printf("\n  next multiple of 10....%d",mul);
 return 0;

}