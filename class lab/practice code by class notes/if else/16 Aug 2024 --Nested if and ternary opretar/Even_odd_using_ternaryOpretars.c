#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the number:");
    scanf("%d",&num);
    printf(num%2?"odd":"even");
}