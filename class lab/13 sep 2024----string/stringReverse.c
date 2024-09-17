/* Write a C program to print the reverse of a given String .
--------
Sample input : Enter a String : NareshIT
Sample output : The reverse of the String is : TIhseraN
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str[100],rev;
    printf("Enter the string:");
    scanf("%s",&str);
    int length = strlen(str);

    printf("The reverse of the String is: ");
    for (int i = length - 1; i >= 0; i--)
   {
        printf("%c", str[i]);
    }
    printf("\n");

    
}