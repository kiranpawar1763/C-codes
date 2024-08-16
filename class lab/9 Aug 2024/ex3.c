/*
Create a program that takes the principal amount, interest rate, and time in years from the user and 
calculates the simple interest. Print the result with appropriate messages.

Sample Input
principal amount: 4000
interest rate (in percentage): 5
time in years: 3

Sample Output
Simple Interest is: 600.00
*/
#include<stdio.h>
int main()
{
    float priAmount , rate ,time ,sp;
    printf("\nEnter the principal Amount:");
    scanf("%f",&priAmount);
    printf("\nEnter the Rate of intrest:");
    scanf("%f",&rate);
    printf("\nEnter the time:");
    scanf("%f",&time);
    sp = priAmount * rate * time/100;
    printf("simpale intrest on Amount is :%.2f",sp);
}