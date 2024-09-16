#include<stdio.h>
void main()
{
    int a,b,*p=&a,*q=&b;
    printf("Enter a ,b values");
    scanf("%d",&a,&b);
    //with out pointer
    // if(a>b)
    // {
    //     printf("a is big");
        
    // }
    // else if(b>a)
    // {
    //     printf("b is big");
        
    // }
    // else
    // {
    //     printf("Both are equal");
    // }
    //Using pointer
    if(*p>*q)
    {
        printf("a is big");
    }
    else if(*q>*p)
    {
        printf("b is big");
    }
    else{
        printf("Both are equal");
    }

}