
#include<stdio.h>
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],nr,nc,r,c,s,k;

  printf("Enter no of rows and columns ");
  scanf("%d %d",&nr,&nc);

   printf("Enter %d numbers for a array ",nr*nc);

    for(r=0;r<nr;r++)
    for(c=0;c<nc;c++)
    scanf("%d",&a[r][c]);

        printf("Enter %d numbers for b array ",nr*nc);
        for(r=0;r<nr;r++)
        for(c=0;c<nc;c++)
        scanf("%d",&b[r][c]);

    printf("Elements are");
    printf("---------------------------------");
    for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
        for(s=k=0;k<nc;k++)
        {
           s+=a[r][k]*b[k][c];
        }
         printf("%4d",s);

   }
       printf("\n");
  }
}