#include<stdio.h>
void main()
{
    int a[100],n,i,ele,f=0;
    printf("Enter  Array size 1-100:");
    scanf("%d",&n);
    printf("Enter %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to delete");
    scanf("%d",&ele);
    printf("Elements are");
    for(i=0;i<=n;i++)
    if(a[i]!=ele)
    {
    printf("%4d,a[i]");
    }
    else
    {
        f=1;
        if(i==0)
        printf("\n%d not found",ele);

    }
}