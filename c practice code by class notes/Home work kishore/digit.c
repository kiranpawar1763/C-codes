// Finding no of digits in given no.
#include<stdio.h>
void main()
{
    long int n ;
    int c=0;
    printf("\nEnter the number:");
    scanf("%ld",&n);
    do
    {
        c++;
        n=n/10;

    }
    while(n!=0);
    printf("No of digit=%d",c);

}