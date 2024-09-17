/*Que 1 : Write a program in C to insert values in the array (unsorted list).
--------
Sample input :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2

Sample output :
The current list of the array :1 8 7 10
After Insert the element the new list is :1 5 8 7 10*/
#include<stdio.h>
void main()
{
    int a[100],n,i,j,value,pos;
    printf("Enter the Array size 1-100:");
    scanf("%d",&n);

    printf("Enter %d integers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

     printf("The current list of the array: ");
    for (int i = 0; i < n; i++)
   {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted (0 to %d): ", n);
    scanf("%d", &pos);

    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = value;

    printf("After Insert the element the new list is: ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
