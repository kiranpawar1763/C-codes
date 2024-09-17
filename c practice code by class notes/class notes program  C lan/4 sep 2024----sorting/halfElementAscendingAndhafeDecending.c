
#include<stdio.h>
void main()
{
    int a[100],n,i,j,t;
    printf("Enter the array 1-100:");
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
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<=n/2;i++)
    printf("%4d",a[i]);
    for(i=n-1;i>=n/2;i--)
    printf("%4d",a[i]);
}
