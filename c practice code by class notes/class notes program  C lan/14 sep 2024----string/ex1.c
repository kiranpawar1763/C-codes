
#include <stdio.h>
#include <string.h>

int main() 
{
    char s[100];
    
    printf("Enter the string: ");
    scanf("%[^\n]", s);  // Correct format specifier
//     count the string using pridefine function

//     int length = strlen(s);  // Calculate the length of the string
//   printf("Length of the given string is %d\n", length);  // Print length

//    reverse the string
//    char rev = strrev(s);
//    printf("reverse the string %s",s);

 //      upper case
 //     char upper =strupr(s);
 //     printf("convert lower string to upper %s",s);

 //     lower case
      char lower =strlwr(s);
        printf("string convert Upper to lower case character %s",s);

    
    return 0;  // Indicate successful execution
 }
