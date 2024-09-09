/*Write a C program that prompts the user to enter a number and then prints the
 multiplication table for that number using a while loop.
*/

#include<stdio.h>
void main()
{
    int n, i=1;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while(i!=11)
    {
        printf("\n%d * %d = %d", n, i, n*i);
        i++;
    }
}