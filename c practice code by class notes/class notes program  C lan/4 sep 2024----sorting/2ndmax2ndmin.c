#include<stdio.h>
void main()
{
int a[100],n,i,j,min, max; clrscr();
printf("Enter array size 1-100 "); 
scanf("%d",&n);
printf("Enter %d integers ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<=n-2;i++)
{

    for(j=0;j<=n-i-2;j++)
    {
        if(a[j]>a[j+1])
        {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
}
  for(i=0;i<n;i++)
 printf("%4d",a[i]);
 printf("\nEnter min, max values ");
 scanf("%d %d",&min, &max);
for(i=1;i<n;i++)
{
    if(a[i]>a[i-1])min--;
    if(min==1)
    {
        printf("\nmin=%d\n",a[i]);
        break;
    }
}
   for(i=n-2;i>=0;i--)
{
    if(a[i]<a[i+1])max--;
    if(max==1)
    {
        printf("Max=%d",a[i]);
        break;
    }
}

}