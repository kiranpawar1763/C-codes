/* Write C program to given pattern.
--------

1  1  1  2  1  3
2  1  2  2  2  3
3  1  3  2  3  3 
4  1  4  2  4  3*/
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