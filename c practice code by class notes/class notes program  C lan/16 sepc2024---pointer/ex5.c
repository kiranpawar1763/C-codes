#include<stdio.h>
void main()
{
    int a,b,*p=&a,*q=&b;
    printf("Enter the a and b:");
    scanf("%d %d",&a,&b);
    if(*p>*q)
    {
        printf("a is big");
    }
    else if(*q>*p)
    {
        printf("B is big");
    }
    else
    {
        printf("Both are equal");
    }
}