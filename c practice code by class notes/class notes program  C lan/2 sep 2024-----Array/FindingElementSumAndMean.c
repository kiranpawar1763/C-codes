// Finding elements sum and mean[avg]
#include<stdio.h>
void main()
{
    float a[100],s=0;
    int n,i;
    printf("Enter Array size between 1-100");
    scanf("%d",&n);
    printf("Enter %d element:",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        s+=a[i];
    }
    printf("Element sum=%.2f,Avg=%.2f",s,s/n);
}