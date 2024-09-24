#include<stdio.h>
int s=0;
int dsum(long n)
{
    if(n!=0)
    {
        s=s+n%10;
        dsum(n/10);
    }
    return s;
}
void main()
{
    long n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%ld digit sum =%d",n,dsum(n));
}