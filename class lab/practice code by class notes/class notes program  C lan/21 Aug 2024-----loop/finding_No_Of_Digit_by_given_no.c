#include<stdio.h>
void main()
{
    long n;
    int c=0;
    printf("enter the number:");
    scanf("%ld",&n);
    do
    {
        c++;
       n= n/10;
        
    } while(n!=0);
    printf(" Number of Digit=%d",c);
}