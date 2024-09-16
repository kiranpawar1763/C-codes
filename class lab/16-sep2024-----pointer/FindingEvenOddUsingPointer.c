#include<stdio.h>
void main()
{
    int n,*p=&n;
    {
        printf("Enter the number");
        scanf("%d",&n);
        printf(*p%2?"odd":"even");
    }
}