#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
for(int i=1;i<=n;i++)
    
     if(i%2==0)
     sum =sum +1;
    
    else 
    
    
        sum = sum -i;

    
    printf("sum%d",sum);
}