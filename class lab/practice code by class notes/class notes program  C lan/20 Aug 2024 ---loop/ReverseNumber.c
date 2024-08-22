// #include<stdio.h>
// void main()
// {long int n ,rev=0;
// int r;
// printf("Enter n value:");
// scanf("%ld",&n);
// while(n!=0)
// {
//     r=n%10;
//     rev = rev *10+r;
//     n= n /10;

// }
//     printf("Reverse no is %d",rev);

// }

#include<stdio.h>
void main()
{
    long n ;
    int r;
    printf("Enter the value:");
    scanf("%ld",&n);
    if(n<0)printf("-",n=-n);
    do
    {
        r=n%10;
        printf("%d",r);
        n=n/10;

    }while(n!=0);
}