#include<stdio.h>
void main()
{
    int a[4]={9,3,1,8},i;
    for(i=0;i<4;i++)
    printf("a[%d] cell addr %u,value %d\n",i,&a[i],a[i]);
    

}