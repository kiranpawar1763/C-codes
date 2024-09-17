#include<stdio.h>
#include<conio.h>
void main()

{
int a[10][10],nr,r,c,rs,cs;

printf("Enter no of rows "); 
scanf("%d",&nr);

printf("Enter %d elements ",nr*nr);

for(r=0;r<nr;r++)
for(c=0;c<nr;c++)

scanf("%d",&a[r][c]);
for(r=0;r<nr;r++)
{
for(rs=cs=c=0;c<nr;c++)
{ 
    rs+=a[r][c]; 
    cs+=a[c][r];
}
    a[r][c]=rs; 
    a[c][r]=cs;
}
puts("Result elements are ");

for(r=0;r<=nr;r++)
{
for(c=0;c<=nr;c++)
{
if(!(r==nr&&c==nr))
 printf("%4d",a[r][c]);
}
printf("\n");

}
}