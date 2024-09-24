/*Write a program in C to compute the sum of all elements in an array using pointers.
--------

Sample input :
Input the number of elements to store in the array (max 10) : 5
Input 5 number of elements in the array : 2 3 4 5 6

Sample output : The sum of array is : 20 
with out comments
*/

#include <stdio.h>

int main() 
{
    int n;
    int arr[10]; 
    printf("enter the number  store in the array 1-10: ");
    scanf("%d", &n);
     printf("Input %d number of elements in the array: ", n);
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
     }

    int sum = 0;
    int *ptr = arr; 
    for (int i = 0; i < n; i++)
     {
        sum += *ptr; 
             ptr++; 
    }

    printf("The sum of the array is: %d\n", sum);

    return 0;
}


