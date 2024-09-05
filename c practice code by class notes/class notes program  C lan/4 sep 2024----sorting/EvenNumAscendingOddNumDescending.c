//Even no’s in ascending order, odd no’s in descending order:
#include<stdio.h>
void main()
{
    int a[100],n,i,j;
    printf("Enter the Array size 1-100:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
     if(a[i]%2==0)
     {
        printf("%4d",a[i]);
     }
         for(n--;n>=0;n--)
          if(a[n]%2!=0)
        {
        printf("%4d",a[n]);
      }
}