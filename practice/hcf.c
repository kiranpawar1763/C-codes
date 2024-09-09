hcf
#include<stdio.h>
void main()
{
    int i, a, b, hcf;
    printf("\nEnter 2 number: ");
    scanf("%d %d", &a, &b);
    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("\nThe HCF of %d and %d is %d", a, b, hcf);
}