#include<stdio.h>
void main()
{
    int a[100],b[100],n1,n2,i,j, t=0;
    printf("Enter the 1st and 2nd Array size 1-100:");
    scanf("%d %d",&n1,&n2);

    printf("Enter %d integers for 1st Array: ",n1);
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    
    printf("Enter %d integers for 2nd Array: ",n2);
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    
    for(i=n1,j=0;i<n1+n2;i++,j++)
    a[i]=b[j];

    for(i=0; i<n1+n2; i++)
    {
        for(j=i+1; j<n1+n2; j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    printf("Element are ");
    for(i=0;i<n1+n2;i++)
    printf("%4d",a[i]);
    
}