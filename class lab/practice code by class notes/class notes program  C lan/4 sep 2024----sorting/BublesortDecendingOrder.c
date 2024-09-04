//Boble sort decending order elements
#include<stdio.h>
void main()
{
    int a[100],i,j,t,n;
    printf("Enter the Array element:");
    scanf("%d",&n);
    printf(" Enter the %d  integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-i-2;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
        printf("sorted Element");
        for(i=0;i<n;i++)
        printf("%4d",a[i]);
}