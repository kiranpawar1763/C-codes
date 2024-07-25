#include<stdio.h>
 int main()
{
     int n = 1234;
     int d1, d2, d3, d4, reversed;
      printf("\nOriginal number is %d", n);

     d1 = n%10;         // Extracts the last digit: 4 //
     n = n/10;          // remove the last digit: 123 //
     d2 = n%10;
     n = n/10;
     d3 = n%10;
     n = n/10;
     d4 = n%10;
     reversed = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
     printf("\nReversed number is.....%d",reversed);    // Combine the digits in reverse order //

}