/* Create a program that compresses a string by replacing repeated characters with a count of the repetition (e.g., "aaabbbcc" 	becomes "a3b3c2").
-------
Sample input : Enter a String : aaabbccdae

Sample output as : a4b2c2*/
#include <stdio.h>
#include <string.h>

void compressString(char *str) {
    int count = 1;
    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        // Print the current character
        printf("%c", str[i]);

        // Count consecutive occurrences of the current character
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // If count is more than 1, print the count
        if (count > 1) {
            printf("%d", count);
        }
        
        // Reset the count for the next character
        count = 1;
    }
    printf("\n");
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a String: ");
    scanf("%s", str);

    // Compress and display the result
    compressString(str);

    return 0;
}
