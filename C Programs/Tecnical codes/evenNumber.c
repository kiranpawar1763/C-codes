#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf(" %d",i);
        }
    }
}
Check Prime Number
Write a C program to check the given number is a prime number or not.
Sample Input
Enter a number : 13
Sample Output
13 is a Prime Number.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for ( int i=1;i<=n;i++)
    {
       if(i*n==n)
       {
        printf("\nit is prime:");
        break;
       }
        else
        {
            printf("\nit is not prime");
        }
       
    }
}
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=4,sum=0;
    for(int i=n;i>=1;i--)
    {
        int f=1;
        for(int j=i;j>=1;j--)
        {
            f=f*j;
        }
        sum+=f;
    }
printf("Sum of factoraila =%d",sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int n ,fact=1,sum,i,j;
    printf("Enter the factorial:");
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
      for ( j=i;j<=1;j++)  
      {
      fact = fact * j;
      }
    
     sum = fact + sum;
    }
    printf("%d",sum);
}

#include<stdio.h>
int main()
{
    int n,a=0;
    printf("Enter the number:");
    scanf("%d",&n);

    for ( int i=1;i<=n-1;i++)
    {
       if(n%i==0)
       {
        a=1;
        
        break;
        }
    }   

        if(a==0)
        {
            printf("it is prime");
        } 
        else
        {
            printf("\nit is not prime");
            
        }
       
    
}
