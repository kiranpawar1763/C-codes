//odd number
#include<stdio.h>
int main()
{
     //int i=1 ,n;
     int i=-1 ,n;
    printf("Enter the number:");
    scanf("%d",&n);
    // {
    //     while(i<n)
    //     printf("%4d",i+=2);
    // }

    
    //     while(i<=n)
    // {
    //     if(i%2!=0)printf("%4d",i);
    //     i++;
    // }
    while(i<n-1)
    {
        printf("%4d",i+=2);
    }
}