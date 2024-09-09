#include<stdio.h>
void main()
{
    long int n,m,rev=0;int r;
    printf("Enter the number:");
    scanf("%ld",&n);
    m=n;
    while(n!=0)
    {
        r = n%10;
        rev = rev *10+r;
        n =  n/10;

    }
    if(m==rev)
    printf("palindrome");
    else 
    {
        printf("it is not palindrome");
    }

}