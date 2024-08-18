/*Question: Write a c program to find the sum of n natural numbers

sample input: 10
sample output: 55 */
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number:");
    scanf("%d",&n);
    n =(n*(n+1)/2);
    printf(" nutural number:%d",n);
}