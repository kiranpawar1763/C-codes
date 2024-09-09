#include<stdio.h>
void main()
{
    int a[100],n,i,j,ele,f=0;
    printf("Enter the array size 1-100:");
    scanf("%d",&n);

    printf("enter %d integers:",n);
    for(i=0;i<n;i++)

    scanf("%d",&a[i]);
    printf("Enter element to be delete:");
    scanf("%d",&ele);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            for(n--,f=1,j=i;j<n;j++)
            a[j]=a[j+1];
            i--;
        }
    }
    if(f==0)
    {
        printf("%d not found",ele);
    }
    else
    {
        printf("Element are");
        for(i=0;i<=n;i++)
        printf("%4d",a[i]);
    }
}