/*Write C program to given pattern.
--------

1   2   3   4   5  
2   4   6   8   10
3   6   9   12  15
4   8   12  16  20
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