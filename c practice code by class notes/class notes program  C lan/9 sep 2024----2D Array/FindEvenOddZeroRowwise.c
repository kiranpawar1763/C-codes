
#include<stdio.h>
void main()
{
    int a[10],r,c,nr,nc,e,o,z;
    printf("Enter the Row and col:");
    scanf("%d",&nr,&nc);
    printf("enter the %d",nr*nc);
    for(r=0;r<nr;r++)
    for(c=0;c<nc;c++)
    scanf("%d",&a[r][c]);
    printf("\t even\todd\tzero");
    printf("------------------------------------");
    for(r=0;r<nr;r++)
    {
        for(e=o=z=c=o;c<nc;c++)
        
            if(a[r][c]==0) z++;
        
        else if(a[r][c]%2==0)
        else o++;
    }
    printf("%d-row \t%d\t%d\t%d\n",r+1,e,o,z);
}
