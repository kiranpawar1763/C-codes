#include<stdio.h>
void main()
{
    int a[10][10],nr,nc,r,c;

    printf("Enter no of Row and columns ");
    scanf("%d %d",&nr,&nc);

    printf("Enter %d elements ",nr*nc);
    for(r=0;r<nr;r++)
    
          for(c=0;c<nc;c++)
            scanf("%d",&a[r][c]);
            printf("Element are\n");

            for(r=0;r<nr;r++)
            {
                for(c=0;c<nc;c++)
                {
                    printf("%6d",a[r][c]);
                }
                printf("\n");
            }
            
        
    
}