/*Write a C program by taking one integer value from the user, if the given number's

last digit is smaller than 5 then print the square of that number else print that 

same number.
Case-1:

Enter a number : 12

Output is :

144
Case 2 :

Enter a number : 17

Output is :

17*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int last = n % 10;
    if (last < 5)  printf("\nOutput is: %d", n* n); 
     else 
     printf("\nOutput is: %d", n); 
        
        
    
}
