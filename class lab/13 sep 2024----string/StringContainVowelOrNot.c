/* Write a C program to check is the String contains any vowel or not.
--------
Sample input  : Enter a String : Apple
Sample output  : This String contains vowel.

Sample input : Enter a String : Rhythm
Sample output  : There is no vowel present in this String.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    scanf("%s",&str);
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
    char ch = str[i];
    if(isalpha (ch))
    {
      ch = tolower(ch);
      if(ch =='a'||ch =='e'||ch =='o'||ch =='i'||ch =='u')
      {
        printf("\nThis String contains vowel");

       return 0;
      }
      else
      {
        printf("\nThere is no vowel present in this String");
        return 0;
      }
      
   
    }
    }
}