#include<stdio.h>

int main()
{
    int n,a;
    printf("Enter the number:");
    scanf("%d",&n);
      a=0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)// i is factor of n
        {
           a =1;
           // printf("given number is composite\n");
            break;
        }

    }
    if(a==0) 
    {
        printf("given number is prime\n");
    }
    else
    {
        printf("Given number is composite\n");
    }
    return 0;
    

}
Find All Armstrong Number
Write a C program to find all Armstrong numbers between 100 to 999.
Sample Input
153
Sample Output
153 is an Armstrong number because (1)^3+(5)^3+(3)^3 = 153.

#include<stdio.h>
int main()
{
    int r,n,m,s=0,q;
    printf("\nEnter the number:");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r =n%10;
        r=r*r*r;
        s=s+r;
        n=n/10;
    }
        if(s==m)
        {
            printf("\nit is amstrong number:");
            

        }
        else 
        {
            printf("\ncomman number");
        }

         printf("%d",s);
}

#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is a strong number
int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == originalNum;
}

int main() {
    printf("Strong numbers between 1 and 500 are:\n");
    for (int i = 1; i <= 500; i++) {
        if (isStrongNumber(i)) {
            printf("%d is a Strong number\n", i);
        }
    }
    return 0;
}
