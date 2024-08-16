/*.Write a program that takes the total bill amount and the number of people
 from the user. 
Calculate and print the amount each person needs to pay, assuming an equal split of
 the bill.
Sample Input
Input :total bill( in float) ->1200.00
number of people(in int)-> 5
Sample Output
Output :amount each person needs to pay ->240*/

#include<stdio.h>
int main()
{
    int totalBill, numperson ,amount;
    printf("\nEnter the total bill amount:");
    scanf("%d",&totalBill);
    printf("\nNumeber of person:");
    scanf("%d",&numperson);
     amount = totalBill / numperson;
     printf("Amount Each Person Need To pay:%d",amount);
     return 0;
    
 }