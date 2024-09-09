/*Write C program to given pattern.
--------

0
0  1
0  1  1
0  1  1  2
0  1  1  2  3
0  1  1  2  3  5
Sample Input
5
Sample Output
0
0  1
0  1  1
0  1  1  2
0  1  1  2  3
0  1  1  2  3  5
*/

#include<stdio.h>
int main()
{
    int f1=1,f2,f3,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i =1;i<=n+1;i++)
    {
        for(int j=1,f1=0,f2=1;j<=i;j++)
        {
        f3=f1+f2;
        printf("%4d",f1);
        f1=f2;
        f2=f3;
        }
        printf("\n");
    }

}
