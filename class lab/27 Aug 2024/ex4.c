/*Write a  simpal program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.



Test Data :

Input the number of terms : 5

Expected Output :

1 + 11 + 111 + 1111 + 11111

The Sum is : 12345*/
1 +11+111
#include<stdio.h>
void main()
{
    int n,s=0,sum=0,i,x;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) 
    {
        s = s * 10 + 1; 
        sum += s; 
        if (i < n) {
            printf("%ld + ", s);
        } else {
            printf("%ld\n", s);
        }
    }

    printf("\nThe Sum is: %d", sum);
    
}
// #include<stdio.h>
// void main()
// {
//     int n, i, x, sum=0;
//     printf("\nEnter Number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++)
//     {   
//         x=i;
//         while(x!=0)
//         {
//             printf("1", x--);
//         }

//         if(i!=n)
//         printf(" + ");

//         sum=(sum*10)+i;
//     }
//     printf("\nThe Sum is: %d", sum);
// }

