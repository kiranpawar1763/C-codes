
#include<stdio.h>
void main()
{
    int a[100],n,i,j,t;
    printf("Enter array size 1-100");
    scanf("%d",&n);
    printf("Enter %d integers",n);
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
    printf("sorted elements");
    for(i=0;i<n;i++)
    printf("%4d",a[i]);
}