/*Create a C program that reads two integers from the user and prints "Equal"
 if they are equal, and "Not Equal" otherwise.

Input as :
Enter a number : 10 10

Output as :*/
#include<stdio.h>
int main()
{
    int equal , notequal,a,b ;
    printf("\nEnter the number:");
    scanf("%d%d",&a,&b);

    if(a==b)
    printf("\nit is equal");
    else
    printf(" it is not equal");

}