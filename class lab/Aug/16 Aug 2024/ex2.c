/*Write a C program to input amount from user and print minimum number of notes 
(Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount. 
How to the minimum number of notes required for the given amount in C programming
. Program to find minimum number of notes required for the given denomination.
 Logic to find minimum number of denomination for a given amount in C program


Input as :

Enter the amount: 1275

Output as :

Rs. 500 notes: 2

Rs. 100 notes: 2

Rs. 50 notes: 1

Rs. 20 notes: 1

Rs. 10 coins: 0

Rs. 5 coins: 1

Rs. 2 coins: 0

Rs. 1 coins: 0*/
#include<stdio.h>
int main()
{
    int n1 ,n2,n3,n4,n5,n6,n7,n8,amount,r;
    printf("\nEnter the amount:");
    scanf("%d",&amount);
    n1 = amount/500;
    amount=amount%500;
    n2 =amount/100;
    amount =amount%100;
    n3= amount/50;
    amount =amount%50;
    n4 = amount/20;
    amount=amount%20;
    n5 =amount/10;
    amount =amount%10;
    n6= amount/5;
    amount =amount%5;
    // n7 =amount/2;
    // amount =amount%2;
    // n8= amount/1;
    // amount =amount%1;
    printf(" 500=%d 100=%d 50=%d 20=%d 10=%d 5=%d",n1 ,n2,n3,n4,n5,n6);





}