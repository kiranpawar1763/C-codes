/*Write C program to given pattern.
--------

1   2   3   4   5
6   7   8   9   10
11  12  13  14  15
16  17  18  19  20
21  22  23  24  25*/

#include<stdio.h>
void main()
{
    int i,j, r ,c,n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=1;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            printf("%4d",a++);
        }
    printf("\n");
    }
    
 
}