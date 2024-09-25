#include<stdio.h>
void main()
{
    int a=100,*p=&a,*q=p;
    if(p==q)
    {
    printf("equal");
    }
    else{
        printf("not equal");
    }
}