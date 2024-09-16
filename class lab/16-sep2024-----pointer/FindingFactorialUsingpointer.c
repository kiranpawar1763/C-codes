#include<stdio.h>
void main()
{
    int n,*p=&n,f=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n>1)
    {
        f=f*n;
        n--;
    }
    printf("Factorial = %d",f);
}