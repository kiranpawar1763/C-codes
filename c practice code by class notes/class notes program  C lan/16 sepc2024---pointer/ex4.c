#include<stdio.h>
void main()
{
    int n,*p=&n,f=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(*p>1)
    {
        f=f* *p;
        --*p;
        //(*p)--;
    }
        printf("\nfactorial =%d",f);
}