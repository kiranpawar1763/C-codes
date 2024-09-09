/*Write a C program to find the min element from an array.
Sample Input
Input as :
Enter array size : 5
Sample Output
Enter 5 elements : 4 5 3 6 2
Min element is : 2
*/

#include<stdio.h>
void main()
{
int a[100],n,i,j,min;
printf("Enter array size 1-100 "); 
scanf("%d",&n);
printf("Enter %d integers ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<=n-2;i++)
{

    for(j=0;j<=n-i-2;j++)
    {
        if(a[j]>a[j+1])
        {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
}
  for(i=0;i<n;i++)
 printf("%4d",a[i]);

 for(i=1;i<n;i++)
{
    if(a[i]>a[i-1])min--;
    if(min==1)
    {
        printf("min=%d\n",a[i]);
        break;
    }
}

}
#include<stdio.h>
void main()
{
    int a[100], n, i, j, temp;
    printf("\nEnter Array Size(1-100): ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    //1st method
    int min = a[0];
    for(i=0; i<n; i++)
    {
        if(min > a[i])
            min = a[i];
    }

    printf("\nMin element is : %d", min);

    //2nd method
    // for(i=0; i<=n-2; i++)
    // {
    //     for(j=0; j<=n-i-2; j++)
    //     {
    //         if(a[j] > a[j+1])
    //         {
    //             temp = a[j];
    //             a[j] = a[j+1];
    //             a[j+1] = temp;
    //         }
    //     }
    // }

    // printf("\nAfter sorting in ascending order: ");
    // for(i=0; i<n; i++)
    // {
    //     printf("%2d", a[i]);
    // }
}

