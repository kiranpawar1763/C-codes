/*Write a C program to convert temperature from Fahrenheit to Celsius.
C= (F - 32) * (5.0 / 9.0)
Input as :
Enter temperature in Fahrenheit: 100
Expected output:
100.00 Fahrenheit is 37.78 Celsius.*/
#include<stdio.h>
void main()
{
 float c ,F ;
 printf("\ntemperature in Fahrenheit: ");
 scanf("%f",&F);
  c= (F - 32) * (5.0 / 9.0);
   printf("/ncelsiusis %.2f",c);
   
}

