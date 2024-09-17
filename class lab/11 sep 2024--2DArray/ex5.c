/* Write a program in C to find the transpose of a given matrix.
-------
Sample input :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4

Sample output :
The matrix is :
1 2
3 4

The transpose of a matrix is :*/
#include<stdio.h>
void main()
{
    int a[10][10] ,nr,nc,r,c;

    printf("Enter the row And colmuns\n:");
    scanf("%d %d",&nr,&nc);

    printf("Enter %d elements\n:",nr*nc);
    for(r=0;r<nr;r++)

    for(c=0;c<nc;c++)
    scanf("%d",&a[r][c]);

    printf("transposed elements\n");
    for(r=0;r<nc;r++)
    {
        for(c=0;c<nr;c++)
        {
            printf("%4d",a[c][r]);
        }
        printf("\n");
    }
}