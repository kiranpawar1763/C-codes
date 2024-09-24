/*: Write a program in C to add two numbers using pointers.
-------

Sample input : first number : 5
               second number : 6

Sample output : The sum of the entered numbers is : 11 */
#include<stdio.h>
void add(int*a,int*b,int*sum)
{
    *sum =(*a + *b);
    
}
int main()
{
    int a,b,sum;
    printf("Enter the 1 st number:");
    scanf("%d",&a);
    printf("Enter the  2 nd number:");
    scanf("%d",&b);
    add(&a,&b,&sum);
    printf("sum of two number %d",sum);
}