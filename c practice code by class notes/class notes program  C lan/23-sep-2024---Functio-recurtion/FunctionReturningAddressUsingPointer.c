#include<stdio.h>
int max(int*a,int*b)
{
    return *a>b?*a:*b;
}
void main()
{
    int x=10,y=20,z=max(&x,&y);
    printf("%d is big",z);
}