#include<stdio.h>
void main()
{
    int a=100,*p=&a;
    printf("a value is %d\n",a);
    printf("a addr is %u\n",&a);
    printf("p value is %u\n",p);
    printf("a valu through p %d\n",*p);
    *p=200;
    printf("a=%d,*p=%d\n,a,*p");
    a=300;
    printf("a=%d, *p=%d\n",a,*p);
}