#include<stdio.h>
void main()
{
    int n,*p=&n;
    printf("enter the number:");
    scanf("%d",&n);
    if(*p>0 )
    {
        printf("positive");
    }
   else if  ( *p < 0)
    {
        printf("negative");

    }
    else
    {
      printf("zero");
    }

}