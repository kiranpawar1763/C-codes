#include<stdio.h>
void main()
{
    int n,*p=&n;
    printf("enter the number");
    scanf("%d",&n);
    if(*p%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");

    }

}