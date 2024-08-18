/*Finding the no of days in given month::
1/3/5/7/8/10/12 – 31 days
4/6/9/11-30 days
2 – 28/29 days
Others – invalid month */
#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter the num of day in 1 to 12:");
    scanf("%d",&n);
    if( n==1 ||n==3|| n==5||n==7 || n==8 || n==10 ||n==12)
    printf("31 days");
    else if (n==2)
    printf("28/29 days");
   else if( n==4||n==6||n==9||n==11)
   printf("30 days");
   else printf("invalid month");


}