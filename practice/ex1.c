Write a C program to add all the digits present in a given 
number until it became a single digit. Develop it by using 
while loop.
Sample Input
Input as : 5678
Sample Output
Ouput as : 8
*/
perfec
#include<stdio.h>
void main()
{
    int n, i=1, mul=0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        if(n%i==0 && i<n)
        {
            mul += i;
            // printf("%3d", i);
        }
        // printf("\n%3d", i);
        i++;
    }
    // printf("\n%3d\n", mul);
    printf(mul==n ? "Perfect number" : "Not a Perfect number");
}