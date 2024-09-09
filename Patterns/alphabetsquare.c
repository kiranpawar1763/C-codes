#include<stdio.h>
void main()
{
    int d,n,a;
    printf("Enter the num:");
    scanf("%d",&n);
    a=1;
    for(int i=1;i<=n;i++)
    {
        d=a+65;
        char ch =(char)d;
        for(int j=1;j<=n;j++)
        {
            printf("%3d",d);
            a++;
        }

        printf("\n");
    }
}