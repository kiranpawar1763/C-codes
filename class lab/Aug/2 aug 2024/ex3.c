#include<stdio.h>
 int main()
{
     int n = 13;
     int d1,  reversed;
      printf("\nOriginal number is %d", n);

     d1 = n%10;     
     n = n/10;          
     
     
     printf("\nReversed number is.%d%d",d1,n);  

}