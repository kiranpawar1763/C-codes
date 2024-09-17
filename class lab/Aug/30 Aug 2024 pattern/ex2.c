/*Write C program to given pattern.
--------

5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1*/

#include<stdio.h>
void main()
{
    int i,j, r ,c,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            printf("%3d",r);
        }
    printf("\n");
    }
    
 
}