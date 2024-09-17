/* Write a c program to print all the frequency of character present in string .
--------
Sample input: String s=" Hello Everyone"

Sample output  :-
The frequency of H is 1
The frequency of e is 3
The frequency of l is 2
The frequency of o is 2
The frequency of   is 1  --------THIS IS FOP CHECKING THE SPACE COUNT 
The frequency of E is 1
The frequency of v is 1
The frequency of r is 1
The frequency of y is 1
The frequency of n is 1*/

#include <stdio.h>
#include <ctype.h> 
int main()
 
 {
    char Str[100]; 
    printf("Enter the string");
    scanf(" %s
    ", &Str);
 
     int frequency[26] = {0}; 
    for (int i = 0; Str[i] != '\0'; i++) 
    {
        char ch =tolower(Str[i]); 

        
        if (isalpha(ch)) 
        {
            frequency[ch - 'a']++; 
        }
    }

    for (char ch = 'a'; ch <= 'z'; ch++) 
    {
        if (frequency[ch - 'a'] > 0) 
        {
            printf("The frequency of %c is %d\n", ch, frequency[ch - 'a']);
        }
    }
}

