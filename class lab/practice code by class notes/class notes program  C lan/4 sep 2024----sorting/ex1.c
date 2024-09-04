//selection sort in Ascending order
#include<stdio.h>
void main()
{
    int a[100],n,i,j;
    printf("Enter Array size 1-100:");
    scanf("%d",&n);
    printf("Enter %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];a[i]=a[j];a[j]=t;
            }
        }
    }
            printf("sorted Elements");
            for(i=0;i<n;i++)
            printf("%4d",a[i]);

}