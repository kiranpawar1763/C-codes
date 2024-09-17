/*Write a C program that asks the user to input an integer and 
count the digts and print the count of the digits.

Input as : 

Enter a number : 546



Output as :

Count of the digits is : 3*/

#include<stdio.h>
void main()
{
    int n ,c=0;
    printf("enter the number:");
    scanf("%d",&n);
    do
    {
       
       c++;
       n=n/10;
    }while(n!=0);
     printf("%d",c);
}
