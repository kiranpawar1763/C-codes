/*Que 2 : Write a program in C to delete an element at a desired position from an array.
-------
Sample input :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3

Sample output :
The new list is : 1 2 4 5*/

#include<stdio.h>
void main()
{
    int a[100],n,i,j,d,pos;
    printf("\nEnter the Array size 1-100:");
    scanf("%d",&n);

    printf("\nEnter %d integers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);


    printf("\nEnter the position to be delete: ");
    scanf("%d",&pos);
     for ( n--,i = pos-1; i < n; i++)
    {
        a[i] = a[i + 1];
    }


    printf("\nAfter delete the element the new list is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%4d ", a[i]);
    }
   
}


