/*Write a program in C to find the sum of all elements of the array.
-------
Sample input:
element - 0 : 2
element - 1 : 5
element - 2 : 8

Sample output :
Sum of all elements stored in the array is : 15
Sample Input
element - 0 : 2
element - 1 : 5
element - 2 : 8
Sample Output
Sum of all elements stored in the array is : 15*/
#include<stdio.h>
int main()
{
    int a[100],n,i,j,s=0;
    printf("\nEnter the array 1-100:");
    scanf("%d",&n);
    printf("\nsum %d integers\n",n);
    
     for(i=0;i<n;i++)
     {
     scanf("%d",&a[i]);
     s=s+a[i];
     }
    
    printf(" sum of all array element:%d",s);
}