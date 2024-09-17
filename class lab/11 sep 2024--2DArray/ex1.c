/*Write a program in C for a 2D array of size 3x3 and print the matrix.
--------
Sample input :
Input elements in the matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9

Sample output :
The matrix is :
1 2 3
4 5 6
7 8 9*/
#include<stdio.h>
void main()
{
    int a[10][10],nr,r,c,nc;
    printf("Enter the Row and columns:");
    scanf("%d %d",&nr,&nc);

    printf("Enter %d elements in matrix:",nr*nc);
    for(r=0;r<nr;r++)
    {
        for(c=0; c<nc; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }

    printf("Elements are\n");
        for(r=0;r<nr;r++)
        {
            for(c=0;c<nc;c++)
            {
                printf("%3d",a[r][c]);
            }
            printf("\n");
        }

    
}
