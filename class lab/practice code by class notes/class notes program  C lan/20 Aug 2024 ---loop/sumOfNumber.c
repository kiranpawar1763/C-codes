//Finding 1...n numbers sum and avg:
//n=4  1+2+3+4=10  10/4=2.5  avg
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Emter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
        printf("sum=%d ,Avg=%.2f",sum,(float)sum/n);

    
}