/*Printing 1..n natural numbers:*/
#include<stdio.h>
int main()
{
    int i=1 ,n ;
    printf("\nEnter the number:");
    scanf("%d",&n);
    
        while(i<=n)
        {
            printf("%4d",i);
            i++;
        }
}
