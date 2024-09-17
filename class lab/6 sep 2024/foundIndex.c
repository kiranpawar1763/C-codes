/*Write a C program to find the element given by user is present in the array or not ? 
If the element is present in the array also programmer have to print 
index position of that searching element.
If the user pass the element for searching in the array is not present
then also provide a appropriate message to the user that element is not 
present inside the array.
Sample Input
Input 1:-
[1,2,3,4,5,6,7]

Enter the number you want to search : 5


Input 2:-

[1,2,3,4,3,6]
Enter the number you want to search : 9*/

#include<stdio.h>
void main()
{
    int a[100], n, i, ele, f=0, in;
    printf("\nEnter Array Size(1-100): ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &ele);
    for(i=0; i<n; i++)
    {
        if(ele == a[i])
        {
            f=1;
            in=a[i];
        }
    }

    if(f== 0)
    {
        printf("\nis not present inside the Array.");
    }
    else{
        printf("\nThe element is present  %d index", in-1);
    }

}


