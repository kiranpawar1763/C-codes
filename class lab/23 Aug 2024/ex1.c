/*Write a C program that asks the user to input a three-digit integer
 and calculates the sum of its digits. Using While loop.

Input as : 

Enter a three digit number : 123



Output as :

Sum of the digits : 6*/

#include<stdio.h>
void main()
{
    int n ,r,s=0;
    printf("\nEnter the number:");
    scanf("%d",&n);
    
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("sum of digit=%d",s);
}