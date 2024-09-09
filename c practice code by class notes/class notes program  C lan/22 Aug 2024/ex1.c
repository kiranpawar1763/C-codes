#include<stdio.h>
void main()
{
    long int n;
    printf("Enter the number:");
    scanf("%ld",&n);
    while(n!=0)
    {
        if(n>9 && n%100<10)
        printf("0");
        printf("%d ",n%100);
        n=n/100;
    }
}