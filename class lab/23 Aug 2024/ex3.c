/*Write a C prgram that asks the user to input an integer and reverse that 
number and display the reverse of that given number.

Case-1

-------

Input as : 

Enter a number : 123

 Output as : 

Reverse of the given number is : 321

case -2

________

Input as :

Enter a number : 2314



Output as : 

Reverse of the given number is : 4132*/
#include<stdio.h>
void main()
{
    int n ,r,rev=0 ;
    printf("enter the number:");
    scanf("%d",&n);
    do
    {

        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }while(n);
        printf("%d",rev);
}
   