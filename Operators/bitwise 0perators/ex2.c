// write  a program to swap two num without using third variable //
#include<stdio.h>
int main()
{
int a=5,b=6;
printf("Enter the number(a)");
scanf("%d",a);
printf("Enter the number(b)");
scanf("%d",b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d,b=%d",a,b);
return 0;
    
}