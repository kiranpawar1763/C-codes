/*Write a c program to find the next multiple of 10 of a given two digit number, if the given number's last digit is less than 5 then 

find the previous multiple of 10 and if the given number's last digit is greater than or equal to 5 then find the next multiple of 10.

[Dont use if else or ternary operator ]*/
#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter the digit: ");
    scanf("%d",&n);
    n%10>=5 && printf("\n%d",(n/10 +1)*10) || printf("\n%d",(n/10)*10);

}