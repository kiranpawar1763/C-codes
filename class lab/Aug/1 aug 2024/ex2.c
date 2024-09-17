//write the program to swap two number using third variable //
#include<stdio.h>
void main()
{
   int a,b,c;
   printf("\nEnter the first value");
   scanf("%d",&a);
   printf("\nEnter the second value");
   scanf("%d",&b);
   c= b%10;
   printf("\na %d",c);
   c=a %10;
   printf("\nb %d",a);
    c=b%10;
    
    
}
/*input:- a=5 , b=6
  output:- a=6 , b=5*/