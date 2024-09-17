/*Write C program to given pattern.
--------

1  1  1  1  1
2  2  2  2  2
3  3  3  3  3 
4  4  4  4  4
5  5  5  5  5*/
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