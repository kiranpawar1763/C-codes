
#include<stdio.h>
void main()
{
    int a[10][10] ,nr,nc,r,c;

    printf("Enter the row And colmuns:");
    scanf("%d %d",&nr,&nc);

    printf("Enter %d elements:",nr*nc);
    for(r=0;r<nr;r++)

    for(c=0;c<nc;c++)
    scanf("%d",&a[r][c]);

    printf("transposed elements\n");
    for(c=0;c<nc;c++)
    {
        for(r=0;r<nr;r++)
        {
            printf("%4d",a[r][c]);
        }
        printf("\n");
    }
}