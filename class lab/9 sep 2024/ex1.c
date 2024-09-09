/*Que 1 : Write a program in C to count the total number of duplicate elements in an array.
--------
Sample input :
element - 0 : 5
element - 1 : 2
element - 2 : 2
element - 3 : 3
element - 4 : 5


Sample output :
Total number of duplicate elements found in the array is : 2*/
#include<stdio.h>
void main()
{
    int n,a[100],dCount;
    printf("Enter the Array 1-100:");
    scanf("%d",&n);

    printf("\nenter %d integers:",n);
    
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<=n;i++)
     dCount = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (a[i] == a[j])
            {
                dCount++;
                break;
            }
        }
        
    }

    printf("total number of duplicate elements in  array is: %d\n", dCount);



    
}