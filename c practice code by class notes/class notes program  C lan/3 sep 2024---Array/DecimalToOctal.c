//Decimal to octal

#include<stdio.h>
void main()
{
    int a[16]={0},n,i;
    printf("Enter the no:");
    scanf("%d",&n);
    for(i=0;n!=0;i++,n=n/8)a[i]=n%8; //dec to oct
    printf("Octal code");
    for(i=15;i>=0;i--)
    printf("%2d",a[i]);
}