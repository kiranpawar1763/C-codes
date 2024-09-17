#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the cost price:");
    scanf("%d",&a);
    printf("profit parcentage:");
    scanf("%d",&b);
    int sp=(100+b)/100*a;
    printf(" total %d",sp);

}