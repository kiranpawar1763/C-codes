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