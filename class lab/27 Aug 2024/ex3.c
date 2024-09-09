/*Write a C program to display the sum of n terms of even natural numbers.



Test Data :

Input number of terms : 5

Expected Output :

The even numbers are :2 4 6 8 10

The Sum of even Natural Number upto 5 terms : 30
*/
nat
#include<stdio.h>
void main()
{
    int n ,sum=0,i;
    printf("Enter the program:");
    scanf("%d",&n);
    printf("the even number are:");
    for ( i=1;i<=n*2;i++)
    {
        if(i%2==0)
        {
        printf("%d ",i);
        sum +=i;
        }

    }
     printf("\nThe Sum of even Natural Number upto %d terms: %d", n, sum);

        
}