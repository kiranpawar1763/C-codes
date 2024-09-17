/*Write a C program to reverse 3 digit number without using any loops.
 Given number is 786 and expected output is 687.


 #include<stdio.h>
 int main()
 {
     int n = 786;
     int d1, d2, d3,  reversed;
      printf("\nOriginal number is %d", n);

     d1 = n%10;         // Extracts the last digit: 6 //
     n = n/10;          // remove the last digit: 78 //
     d2 = n%10;
     n = n/10;
     d3 = n%10;
     n = n/10; 
     reversed = d1 * 100 + d2 * 10 + d3 ;
     printf("\nReversed number is.....%d",reversed);  // Combine the digits in reverse order //

}
 */ 
#include<stdio.h>
int main()
{
     int n=123;
     printf("n=%d%d%d",n%10,n/10%10,n/10/10%10);
}
