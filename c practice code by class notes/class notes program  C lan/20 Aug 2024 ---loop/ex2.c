/*Printing 1..n natural numbers in Reversed order:*/
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number:");
    scanf("%d",&n);

        while (n>=0)
        {
         
         printf("%4d",n);
         n--;
         
        }
}