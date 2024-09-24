/* Write a program in C to find the maximum number between two numbers using a pointer.
-------

Sample input : first number : 5
               second number : 6

Sample output : 6 is the maximum number.
*/
#include<stdio.h>
void findmax(int*a,int*b,int*max)
{
    *max =(*a>*b)?
    *a:*b;
}
int main()
{
    int a,b,max;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second numbers:");
    scanf("%d",&b);
    findmax(&a,&b,&max);
    printf("max number is %d",max);

    
}