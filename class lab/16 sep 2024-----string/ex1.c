/* Write a c program to check the String is Palindrome  or Not .
-------
Sample input : madam

Sample output : madam is a palindrome
*/
#include<stdio.h>
#include<string.h>
#include <ctype.h> 
void main()
{
    char str[100];
    printf("Enter the string ");
    scanf("%s",&str);

    for(int i=0; str[i]!='\0' ;i++)
    
    for(int j=0; j<i/2; j++)
    
    
     if(tolower( str[j]!= tolower (str [i-j-1] )))

        {
            printf("\nThis is not a palindrome");
        
        }
        else
        {
            printf("\nthis string is a palindrome");
        }   
    
}
