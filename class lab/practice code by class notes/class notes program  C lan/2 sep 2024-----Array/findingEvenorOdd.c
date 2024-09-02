// Read the elements into array and finding the no of even /odd /zero elements
#include<stdio.h>
void main()
{
    int a[100],e,o,z,n,i;
    printf("Enter the size between 1-100:");
    scanf("%d",&n);
    printf("Enter the %d element:",n);
    for(e=o=z=i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        z++;
        else if(a[i]%2==0)
        e++;
        else
        o++;
    }
    printf("Even=%d,odd=%d,zero=%d",e,o,z);
}