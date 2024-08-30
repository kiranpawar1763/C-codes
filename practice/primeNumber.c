// print n prime numbers
#include<stdio.h>
int main()
{
    int n1,n2,a, c=0;
    printf("Enter first and last number:");
    scanf("%d %d",&n1, &n2);

    for(int j=n1; j<=n2; j++)
    {
        a=0;
        for ( int i=1; i<=j; i++)
        {
            if(j%i==0)
            {
                a++;
            }
        }   
        if(a==2)
        {
            printf("\n%d ", j, c++);
        } 
    }
    printf("\nAll Prime numbers are %d", c);       
}

/* find only prime or not
#include<stdio.h>
int main()
{
    int n,a=0;
    printf("Enter the number:");
    scanf("%d",&n);

    for ( int i=1;i<=n;i++)
    {
       if(n%i==0)
       {
        a++;
        }
    }   

    if(a==2)
    {
        printf("\n%d is prime", n);
    } 
    else
    {
        printf("\n%d is not prime", n);
        
    }
       
}

*/

/*
Enter first and last number:1
100

2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
All Prime numbers are 25
*/