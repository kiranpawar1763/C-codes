/*Write a program in C to check whether a number is a prime number or not by using the function.
-------

-> create int main() function.
-> create bool isPrime(int n) function.
-> in main function read one number and call isPrime(int n) function. here isPrime(int n) function will perform the operation and will return true or false to the main function.
-> in main function catch the boolean result and according that print the proper message.

Sample input : Input a positive number : 5

Sample output : The number 5 is a prime number.*/

#include <stdio.h>
#include <stdbool.h>

 bool isPrime(int n)
 {
     int c=0;
     for(int i=1;i<=n;i++)
     {
         if(n%i==0)
         {
             c++;//2
         }
     }
     if(c==2)
     {
        return true;
     }else{ 
     return false;}
 }

int main() 
{
    int n;  
      
    printf("enter the number: ");
    scanf("%d",&n);  

    
   bool result = isPrime(n);
    if(result)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }

    
    return 0;
}

