/*write a program to perform sum of to numbers without using '+' operater
input:- a=5, b=6*/
#include<stdio.h>
int main()
{
    int a,b;
     printf("\nEnter the a value");
    scanf("%d",&a);
    printf("\nEnter the value of b");
    scanf("%d",&b);
    int c= a- (-b);//- - ==>+
    printf("%d ",c);
    return 0;
}