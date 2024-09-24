#include<stdio.h>
char * max(int*a,int*b)
{
    return *a>*b?"x is big":*b>a?"y is big":"both are equal";
}
void main()
{
    int x,y;
    char *z;
    printf("Enter the x and Y value ");
    scanf("%d %d",&x,&y);
    z=max(&x,&y);
    printf(z);
}
