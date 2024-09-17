/*Write C program to given pattern.
--------

1  2  3  4  5
2  3  4  5  6
3  4  5  6  7
4  5  6  7  8
5  6  7  8  9

*/

#include<stdio.h>
void main()
{
    int r ,c,k,n;
    printf("Enter the number:");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        for(c=1,k=r;c<=n;c++)
        {
             
            printf("%4d",k++);
        }
    printf("\n");
    }
    
 
}