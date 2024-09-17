/*Write a C program to convert all the character to upper case from a given index to end index. If the given index is not available then print Index is not available.
-------
Sample input  :
Enter a String : I am a student
Enter the starting index number : 4
Enter the ending index number : 13

Sample  output : I am A STUDENT
Sample Input
Enter a String : I am a student
Enter the starting index number : 4
Enter the ending index number : 13
*/
#include <stdio.h>
#include <ctype.h>  // For toupper function
#include <string.h> // For strlen function

int main() {
    char str[100];
    int startIndex, endIndex, length;

    // Taking string input
    printf("Enter a String : ");
    fgets(str, sizeof(str), stdin);
    
    // Removing the newline character from the string
    str[strcspn(str, "\n")] = '\0';

    // Taking the start and end index
    printf("Enter the starting index number : ");
    scanf("%d", &startIndex);
    
    printf("Enter the ending index number : ");
    scanf("%d", &endIndex);

    // Calculating the length of the string
    length = strlen(str);

    // Check if the indexes are valid
    if (startIndex < 0 || endIndex < 0 || startIndex >= length || endIndex >= length || startIndex > endIndex) {
        printf("Index is not available\n");
    } else {
        // Convert characters to uppercase from startIndex to endIndex
        for (int i = startIndex; i <= endIndex; i++) {
            str[i] = toupper(str[i]);
        }
        printf("Modified String: %s\n", str);
    }

    return 0;
}
