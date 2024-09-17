max min
#include<stdio.h>
void main()
{
    int a[100],n,j,i;
    printf("Enter the array size 1-100");
    scanf("%d",&n);
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-i-2;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
        }
    }
    for(i=0;i<n;i++)
    printf("%4d",a[i]);
    printf("\n1st min=%d,1st max=%d", a[0],a[n-1]);
}