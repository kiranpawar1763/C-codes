/*Write a program in C to display the multiplication table for a given integer. 



Test Data :

Input the number (Table to be calculated) : 15

Expected Output :

15 X 1 = 15

...

...

15 X 10 = 150======*/
#include<stdio.h>
void main()
{
    int n,t;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        t=n*i;
        printf("\n%d x %d = %d",n,i,t);
    }
}