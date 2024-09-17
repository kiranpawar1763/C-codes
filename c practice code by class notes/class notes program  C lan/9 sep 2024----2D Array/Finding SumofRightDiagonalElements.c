#include<stdio.h>
void main()
{
    int a[10][10],nr,nc,r,c,s=0;
    printf("Enter no of rows and columns:");
    scanf("%d%d",&nr,&nc);
    if(nr==nc)
    {
        printf("Enter %d elements",nr*nc);
        for(r=0;r<nr;r++)
        for(c=0;c<nr;c++)
        {
            scanf("%d",&a[r][c]);
            if(r+c==nr-1)
             {
                s+=a[r][c];
             }
        }
        printf("Trace=%d",s);
    }
    else
        {
            printf("Row and columns should be same");
        }
}