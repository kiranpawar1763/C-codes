// finding max of three  number
#include<stdio.h>
void main()
{
    int n1 ,n2 ,n3 ;
    printf("\nEnter the number:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1==n2 && n2==n3)printf("all are equal");
    else if(n1>n2 && n3)printf("\n n1 is greter");
    else if(n2>n3 )printf("\n n2 is greter");
    else printf("n3 is big");

}

