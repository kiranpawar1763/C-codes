//Arranging array elements in reverse order
#include<stdio.h>
void main()
{
    int a[100],n,i;
    printf("Enter array size(1-100):");
    scanf("%d",&n);
    printf("Enter %d integers",n);
    for(i=0;i<n;i++)
    
        scanf("%d",&a[i]);
        printf("Revers order");
        for(n--;n>=0;n--)
        printf("%4d",a[n]);
}