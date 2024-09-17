/*Write a C program to find the maximum between two numbers using Switch statement.*/
#include<stdio.h>
void main()
{
    int a ,b;
    printf("\nEnter the Number:");
    scanf("%d %d",&a ,&b);
    
    switch(a>b)
    {
        case 1:
            printf("\n A is Greater than B" ,a);
            break;
        
        default :
        printf("\n B is Greater than A",b);
        break;
    }
}