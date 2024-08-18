#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the num:");
    scanf("%d",&num);
    printf(num>0?"positive":num<0?"negetive":"zero");
}