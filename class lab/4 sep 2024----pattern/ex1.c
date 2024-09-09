/*Write C program to given pattern.
--------

1   2   3   4   5
6   7   8   9
10  11  12  
13  14
15
Sample Input
5
Sample Output
1   2   3   4   5
6   7   8   9
10  11  12  
13  14
15
*/
#include<stdio.h>
void main()
{
    int n,c=1,i,j;
    printf("Enter the row and col:");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {printf("%4d",c);
        c++;
        }

    printf("\n");
    }
}
