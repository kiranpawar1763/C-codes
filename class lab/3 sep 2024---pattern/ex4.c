/* Write C program to given pattern.
--------

1
2   3
4   5   6
7   8   9   10
11  12  13  14  15
*/
#include<stdio.h>
void main()
{
    int n,a;
    printf("Enter the number:");
    scanf("%d",&n);
    a =1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        printf("%4d",a);
        a++;
        }
      printf("\n");
    }
    }

