/*write a C program to find the factorial of a given number. 
Take the input from the user.
Input as :

Enter a number : 5



Output as :

Factoria of 5 : 120
*/

#include<stdio.h>
void main()
{
    int  n ,i=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        i=i+i;
        i=i*n;
        i--;
    }
    printf("%d",i);
}