#include<stdio.h>
void main()
{
    int a[2][3]={{1,2,3},{4,5,6}},r,c;
    printf("Elements are \n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%4d",a[r][c]);
        }
        printf("\n");
    }
}