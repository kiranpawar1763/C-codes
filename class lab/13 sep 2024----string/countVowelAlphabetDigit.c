/* Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .
--------
Sample input : Enter a String : Nareshit @123

Sample output  :
Vowel count is : 3
Consonant count is : 5
Digit count is : 3
Special Character count is : 1*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    int Consonant=0, Vowel =0, Digit=0, SpecialChar=0;
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]",&str);
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
    char ch = str[i];
    if(isalpha (ch))
    {
      ch = tolower(ch);
      if(ch =='a'||ch =='e'||ch =='o'||ch =='i'||ch =='u')
      {
        Vowel++;
      }
      else 
      {
        Consonant++;
      }
    }
    else if (isdigit(ch))
       {
            Digit++;
        }
        
        else 
        {
            SpecialChar++;
        }
    }
    printf("Vowel count is:%d\n",Vowel );
    printf("Consonant count is:%d\n",Consonant);
    printf("Digit count is :%d\n",Digit);
    printf("Special Character count is:%d\n",SpecialChar);
}

