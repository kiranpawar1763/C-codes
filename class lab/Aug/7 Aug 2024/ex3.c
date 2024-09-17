 /*Write a 'C' program to check and print that given number is
  even or odd without using ternary operator and control statments.
Sample input : int a = 10
Sample Output : EVEN

Sample input : int a = 125
Sample Output : ODD */
#include<stdio.h>
void main()
{
    int n ,even,odd;
    printf("\nEnter the number:");
    scanf("%d",&n);
   printf("%s\n", (n & 1) == 0 ? "even" : "odd");// Using bitwise AND to check if the 
                                                  // number is even or odd

 }
-------------------------or-------------------------------
#include<stdio.h>

int main() 
{
    int a ;
    printf("\nEnter the value:");
    scanf("%d",&a);
    char *result[2] = {"EVEN", "ODD"};

    // Using bitwise AND and array indexing to determine even or odd
    printf("%s\n", result[a & 1]);

    return 0;
}