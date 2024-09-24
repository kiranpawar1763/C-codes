/*e 10 : Write a C program to calculate the sum of all elements in an integer array using function.
------

-> create int main() function.
-> create int arraySum(char str[]) function. this function will take integer array as input in parameter and will return the total sum as result.
-> in main function read size of array , then based on size create new array and store the values.
-> call the arraySum function and print the sum which is return by arraySum function.


Sample input:
              Size of the array: 5
              Array elements: 10 20 30 40 50


Sample output: Sum of all elements in the array: 150
*/
#include<stdio.h>
int arrsum(int n,int *arr)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
       sum+=arr[i]; 
    }

    return sum;
}
int main()
{
    int arr[100],n,j,i;
    printf("Enter the array 1-100");
    scanf("%d",&n);
    printf("enter %d integer",n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
   printf("%d",arrsum(n,arr));
    
}