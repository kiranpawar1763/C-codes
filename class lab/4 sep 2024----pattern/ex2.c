/*Write C program to given pattern.
--------

*  *  *  *  *
*  *  *  *  
*  *  *      
*  *
*
Sample Input
5
Sample Output
*  *  *  *  *
*  *  *  *  
*  *  *      
*  *
*
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
        {
            printf(" * ");
            printf(" ");
        }

    printf("\n");
    }
}
