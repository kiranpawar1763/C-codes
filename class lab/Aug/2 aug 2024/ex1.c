// write the c program to add each digit of given two digit number the given number 67//
#include<stdio.h>
int main()
{
    int n,sum;
    printf("\n enter the number");
    scanf("%d",&n);
    sum= n/10 + n%10;
    printf("%d",sum);
    return 0;
}
