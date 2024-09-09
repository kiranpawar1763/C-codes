#include<stdio.h>
void main()
{
    int r,s=0; 
    long n;
    printf("\nEnter the number:");
    scanf("%ld",&n);
    while(n!=0)
    {
    
    r=n%10;
    s+=r;
    n=n/10;
    }
    printf("sum of digit=%d",s);
}