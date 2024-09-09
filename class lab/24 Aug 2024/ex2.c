/*Write a C program to generate the Fibonacci sequence up to a given times using a 
while loop. The Fibonacci sequence is a series of numbers in which each number is
 the sum of the two preceding ones, usually starting with 0 and 1. 
 The program should prompt the user to enter a
  positive integer and then print the Fibonacci sequence up to that number.



Input as:

Enter how many Fibonacci series you want : 9 



Output as:

0 1 1 2 3 5 8 13 21*/

// #include <stdio.h>

// int main() {
//     int a=0,b=1,s,n,i=3;
//     printf("enter the number upto which you want to print fibonacci series:");
//     scanf("%d",&n);
//     printf("%d  %d",a,b);
//     while(i<=n)
//     {
//         s=a+b;
//         printf("%3d",s);
//         a=b;
//         b=s;
//         i++;
//     }
//     return 0;
 //}
#include<stdio.h>
void main()
{
    int  i=3,b=1,a=0,s,n;
    printf("Enter how many Fibonacci series you want:");
    scanf("%d",&n);

    if(i==1)
    {
        printf("%d",a);
    }
    else if(i==b)
    {
        printf("%d",b);
    }
    else 
     //while(i<=n)
     {
          s= a+b ;
         printf("%3d",s);
           a = b;
           b = s;
           i++;


     }
     printf("%d %d",a,b);
}