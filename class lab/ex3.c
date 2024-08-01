/*write a program to make sum of two digit number
input-: n=34
output-:7*/
#include<stdio.h>
int main()
{
    int n ;
    int sum;
    printf("\nEnter the value ");
    scanf("%d",&n);
    int x =n / 10;
    int  y= n % 10;
    sum = x + y;

    printf("\n sum of two digit= %d",sum);
    
    return 0;
}