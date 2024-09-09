//Finding prime and composite elements of Array
#include<stdio.h>
void main()
{
    int a[100],i,n,j,c;
    printf("Enter the Array Element (1 to 100):");
    scanf("%d",&n);
     printf(" enter %d Element:",n);
    for(i=0;i<n;i++)
    scanf("%d",& a[i]);
    for(i=0;i<n;i++)
    {
        for(c=0,j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            c++;
        }
        if(c==2)
            {
                printf("%d is prime\n",a[i]);
            }
        else 
        {
          printf("%d is composite no\n",a[i]);
        }

    }
}