#include<stdio.h>
void main()
{
    int a[100],b[100]={0},n,i,j,c;
    printf("Enter array size 1-100:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(b[i]!=-1)
        {
            for(j=i+1,c=1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    b[j]=-1;
                }
            }
            b[i]=c;
        }
    }
    for(i=0;i<n;i++)
    if(b[i]!=-1)
    printf("%d found %d times\n",a[i],b[i]);
}