/*Write a program in C to read N number of values in an array and display them in reverse order.

Sample input :
element - 0 : 2
element - 1 : 5
element - 2 : 7

Sample output :
The values store into the array are :2 5 7
The values store into the array in reverse are :7 5 2
Sample Input
element - 0 : 2
element - 1 : 5
element - 2 : 7*/ 
// #include <stdio.h>

// int main() 
// {
//     int N;

//     // Asking user for the number of elements
//     printf("Enter the number of elements: ");
//     scanf("%d", &N);

//     int array[N]; // Declare an array of size N

//     // Read N elements into the array
//     for (int i = 0; i < N; i++) 
//     {
//         printf("element - %d : ", i);
//         scanf("%d", &array[i]);
//     }

//     // Display the original array values
//     printf("The values stored in the array are: ");
//     for (int i = 0; i < N; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     // Display the array values in reverse order
//     printf("The values stored in the array in reverse are: ");
//     for (int i = N - 1; i >= 0; i--) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     return 0; // Indicate the program ended successfully
//}
#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    printf("\nEnter the array 1-100:");
    scanf("%d",&n);
    printf("\nrev %d integers\n",n);
    
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     {
      
           printf("reverse");
            for (i = n-1;i>=0;i--) 
            {
                printf("%d ", a[i]);
            }
          printf("\n");
        
  }  } 

