//Inserting a new element into array at specified position[push – right
//shifing of array elements
#include<stdio.h>
void main()
{
    int a[100],n,i,ele,pos;
    
    printf("Enter the array size 1-100:");
    scanf("%d",&n);

    printf("Enter %d integers",n);
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the new Element and Position");
    scanf("%d %d",&ele,&pos);
    
    if(pos<1||pos>n+1)
    {
        printf("position should be 1 to %d only",n+1);

    }
    else
    {
        for(i=n;i>=pos;i--)
        a[i]=a[i-1];
        a[i]=ele;
        printf("Elements are");
        for(i=0;i<=n;i++)
        printf("%4d",a[i]);
    }
    
}