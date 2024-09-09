#include<stdio.h>
int main()
{
    int  n;
    printf("\nEnter the age:");
    scanf("%d",&n);
    if(n>=18)printf("congrats you elgibal for voting");
    else
    printf(" sorry you are not eligibal for voting");
    return 0;
}