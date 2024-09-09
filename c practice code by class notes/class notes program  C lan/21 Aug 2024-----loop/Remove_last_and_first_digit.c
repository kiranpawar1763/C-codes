#include<stdio.h>
void main()
{
    int n ;
    printf("\nEnter the number:");
    scanf("%d",&n);
    printf("\nlast digit=%d",n%10);
    while(n>9 || n<-9) n = n/10;
    printf("\nfirst digit=%d",n);
}