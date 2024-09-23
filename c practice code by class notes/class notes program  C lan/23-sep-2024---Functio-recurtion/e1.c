#include<stdio.h>
char * max(int*a,int*b)
{
    return *a>*b?"x is big":*b>a?"y is big":"both are equal";
}
void main()
{
    int x=10,y=10;
    char *z=max(&x,&y);
    printf(z);
}