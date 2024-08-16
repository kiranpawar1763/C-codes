/*Write a C program to check whether a number is divisible by 5 and 11 or not.
Input as : 
Enter a number : 55
Output as : 
55 is divisible by both 5 and 11*/
#include<stdio.h>
int main()
{
    int n ;
    printf("\nEnter the number:");
    scanf("%d",&n);
     if(n%5==0 && n%11==0)
    printf("\nit is divisibale by 5 and 11 ");
    else
    printf(" it is not divisibale by 5 and 11");
}