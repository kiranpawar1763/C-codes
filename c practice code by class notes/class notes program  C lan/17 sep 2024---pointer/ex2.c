#include<stdio.h>
void main()
{
    int a=10,*p=&a,**q=&p,***r=&q;
    printf("%d,%d,%d,%d",a,*p,**q,***r);
}