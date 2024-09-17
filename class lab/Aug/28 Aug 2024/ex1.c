/*1.
Write a C program that calculates the sum of a factorial series up to a given
 number of terms.
Sample Input
Enter the number of terms in the factorial series: 5
Sample Output
The sum of the factorial series up to 5 terms is: 153
*/
#include<stdio.h>
void main()
{
    int n ,fact, sum=0,m,j;
    printf("\nEnter the number:");
    scanf("%d",&n);
    
    for( int i=1;i<=n;i++)
    {
        fact = 1;
        for (int j=1; j<=i; j++)
        {
          fact = fact * j;
        }
        sum = sum + fact;
        // printf("\nFactorial = %d",fact);
    }

    /*
    m=n;
    while(m!=0)
    {
        fact =1;
        // for(j=m; j>=1; j--)
        // {
        //   fact = fact * j;
        // }
        j=m;
        while(j!=0)
        {
          fact = fact * j;
          j--;
        }
        sum += fact;
        m--;
        printf("\nFactorial = %d",fact);
    }
    */


     printf("\n sum of the factorial %d Term is: %d",n , sum);
}
