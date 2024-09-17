/*Write a C program to check whether the given number is negative , 
positive or Zero. Take the input from the user and print appropriate statement 

as per your input. Develop it by using control flow statement.
Case-1

Input as :
Enter the number: -1
Output as :

The number is negative.
Case-2
Input as :
Enter the number: 5
Output as :
The number is positive.*/
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number:");
    scanf("%d",&n);
    if(n>0)printf(" number is positite:");
    else printf("it is negative:");
    printf("%d",n);
}