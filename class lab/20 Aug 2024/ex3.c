/*Write a C program to check the number is even or odd by using Switch Case.*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    switch(num%2==0)
    {
    case 1:
     printf("it is even");
       break;
     default:
     printf("in is odd");
     break;
    
    }
}