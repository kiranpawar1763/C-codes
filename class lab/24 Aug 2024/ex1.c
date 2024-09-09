/*Write a C program that prompts the user to enter a number and then prints the
 multiplication table for that number using a while loop.
*/
#include<stdio.h>
void main()
{
    int t, n ,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n)
    {
       t= n*i;
       i++;
    }
    printf("%d",t);
}