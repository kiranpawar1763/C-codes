/*Write a program in C to take two integers as input and print 
whether the first one is divisible by the second one using if-else statement.

Input as :

Enter the first integer: 20

Enter the second integer: 5
Output as:

20 is divisible by 5*/
#include<stdio.h>
int main()
{
    int n,a;
    printf("\nEnter the number:");
    scanf("%d",&a);
    printf("\nEnter the number:");
    scanf("%d",&n);
    if(a%n==0)printf("  number is divisibal:");
    else printf("it is not divisibal:");
    printf("%d",n);
}