/*write a C program that takes a number as input from the user
and determines whether it is a spy number of not, DEVELOP 
this by using while loop.
A Spy number is a number where the sum of its digits is equal
to its product of its digits.
Sample Input
1124
Sample Output
1124 is spy numbers
*/

#include<stdio.h>
void main()
{
    int n, sum=0, mul=1, l;
    printf("\nEnter number: ");
    scanf("%d", &n);
    while(n>0)
    {
        l =n%10;
        sum = sum+l;
        mul=mul*l;
        n=n/10;

    }

    if(sum == mul)
    {
        printf("\n is a Spy number");
    }
    else{
        printf("\nis not a Spy number");
    }
}
