/* Write a C program to input elements in array and search an element in
 array using pointers. 
--------

Sample input : {10, 20, 30, 40, 50, 60, 70}

Input element to search: 25

Sample output :

25 does not exists in array

*/
#include<stdio.h>
void main()
{
    int a[100],n,i,j,pos;
    printf("Enter Array size 1-100:");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
            printf("sorted Elements");
            for(i=0;i<n;i++)
            printf("%4d",a[i]);
        
        
            printf("\nEnter the element to be serched\n");
            scanf("%d",&pos);
            if(a[i]!=pos)
            {
                printf("Element not found");
            }

}
