/*Write a program in C to check if a given number is even or odd using the function.
-------

-> create int main() function.
-> create bool isEvenOrOdd(int n) function.
-> in main function read one number and call isEvenOrOdd(int n) function.
 here isEvenOrOdd(int n) function will perform the operation and will
  return true or false to the main function.
-> in main function catch the boolean result and according that print the proper message.

Sample input : Input any number : 5

Sample output : The entered number is odd. 
*/
#include <stdio.h>


int evenodd(int n)
 {
    return n%2==0;  
}

int main() 
{
    int n;  
    int result;  
    printf("enter the number: ");
    scanf("%d", &n);  

    
    result = evenodd(n);
    if(result==0)
    {
        printf("odd");
    }
    else{
        printf("even");
    }

    
    
}
