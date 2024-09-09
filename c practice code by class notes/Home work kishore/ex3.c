//Finding last and first digits of given no
//Eg: 2073  3 last digit, 2 first digit
#include<stdio.h>
void main()
{
    long int n;
    int c=0;
    printf("\nEnter the number:");
    scanf("%ld",&n);
    printf("last digit =%d",n%10);
    while(n>9) n=n/10;
    printf("first digit = %d",n);

}