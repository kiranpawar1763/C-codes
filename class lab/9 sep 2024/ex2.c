/*ue 2 : Write a program in C to print all unique elements in an array.
-------
Sample input:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5

Sample output :
The unique elements found in the array are:3 5*/

#include<stdio.h>
void main()
{
    int n,a[100],unique,i,j;
    printf("Enter the Array 1-100:");
    scanf("%d",&n);

    printf("\nenter %d integers:",n);
    
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<=n;i++)
    {
        unique =0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                unique++;
            }
        }
    }
    if(unique==1)
    {
        printf("%d",a[i]);

    }
}
//      {
//      unique = 0;
     
//     //for (int i = 0; i < n; i++) 
    
//         for (int j = 0; j < n; j++) 
//         {
//             if (a[i] == a[j])
//             {
//                 unique++;
            
//             }
//         }
//             if(unique==1)
//             {
//                 printf("\n%d",a[i]);
//             }
//     }

   


    
// }
