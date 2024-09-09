//Decimal to binary conversion
#include<stdio.h>
void main()
{
    int a[16]={0},n,i;
    printf("Enter the no:");
    scanf("%d",&n);
    for(i=0;n!=0;i++,n=n/2)a[i]=n%2; //dec to bin
    printf("Binary code");
    for(i=15;i>=0;i--)
    printf("%2d",a[i]);
}