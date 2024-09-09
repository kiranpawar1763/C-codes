#include<stdio.h>
void main()
{
    int p ,b ,power=1;
    int sum=0;
    printf("Enter the power:");
    scanf("%d",&p);
    printf("Enter the base:");
    scanf("%d",&b);
    while(p>=1)
    {
        power=power * b;
        p--;
        sum = sum +power;

    }
    printf("\npower %d",power);
    printf("\npower sum %d",sum);

}