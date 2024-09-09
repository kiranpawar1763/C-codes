#include<stdio.h>
void main()
{
    int p ,b;
    long par=1;
    printf("Enter the power:");
    scanf("%d",&p);
    printf("Enter the base:");
    scanf("%d",&b);
    while(p>=1)
    {
        par = par * b;
        p--;
    }
    printf("power= %ld",par);
}