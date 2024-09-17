#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],nr,r,c,nc,s;
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

    printf(" first Array elements\n");
        for(r=0;r<nr;r++)
        {
            for(c=0;c<nc;c++)
            {
                printf("%3d",a[r][c]);
            }
            printf("\n");
        }
        for(r=0;r<nr;r++)
    {
        for(c=0; c<nc; c++)
        {
            scanf("%d", &b[r][c]);
        }
    }

    printf(" second Arrays elements\n");
        for(r=0;r<nr;r++)
        {
            for(c=0;c<nc;c++)
            {
                printf("%3d",b[r][c]);
            }
            printf("\n");
        }

  for(r=0;r<nr;r++)
        {
            for(c=0;c<nc;c++)
            {
                for(int k=s=0;k<nc;k++)
                {
                s=s+a[r][k]*b[k][c];

                }
        
                printf("%4d",s);
            }
            printf("\n");
        }
    
}
