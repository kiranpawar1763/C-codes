#include<stdio.h>
void main()
{
    int n,*p=&n;
    printf("Eneter a no:");
    scanf("%d",&n);
    printf(n>0?"+ve":n<0?"-ve":"zero");

}