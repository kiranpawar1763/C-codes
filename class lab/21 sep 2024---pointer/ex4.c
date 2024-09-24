/*Write a program in C to print the elements of an array in reverse order using pointer.
--------

Sample input :
Input the number of elements to store in the array (max 15) : 5
Input 5 number of elements in the array : 2 3 4 5 6

Sample output : 
The elements of array in reverse order are :  6 5 4 3 2                                                               
*/

#include <stdio.h>

int main() 
{
    int n,i;
    int arr[10]; 
    printf("enter the number  store in the array 1-10: ");
    scanf("%d", &n);
     printf("enter %d integers: ",n);
    for (int i= 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
     }

    int *ptr = arr; 
     ptr = arr + n - 1;
      printf("The elements of array in reverse order are: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", *(ptr - i));
    }
    
    return 0;
}
