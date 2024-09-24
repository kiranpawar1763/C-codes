/*1)Write a program to find and count all palindromicrome substrings in a given string.
--------
Sample input : Enter a String : madam

Sample output   :  Palindromic substring : madam
		   Palindromic substring : ada
		   Total palindromic substrings are : 2
*/
#include<stdio.h>
void main()
{
     int str[100];
     printf("Enter the string name:");
     scanf("%d",&str);
     for(int i=0;i<[str];i++)
     {
     }

}#include <stdio.h>
#include <string.h>

// Function to check if a substring is a palindrome
int isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // It is a palindrome
}

// Function to find palindromic substrings
void findPalindromicSubstrings(char str[]) {
    int length = strlen(str);
    int count = 0;

    printf("Palindromic substrings:\n");
    
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            // Check if the current substring is a palindrome
            if (isPalindrome(str, i, j)) {
                // Print the palindromic substring
                printf("%.*s\n", j - i + 1, str + i);
                count++;
            }
        }
    }

    printf("Total palindromic substrings are: %d\n", count);
}

int main() {
    char str[100]; // Buffer for input string

    // Input string from user
    printf("Enter a String: ");
    scanf("%s", str);
    
    // Find and display palindromic substrings
    findPalindromicSubstrings(str);

    return 0;
}
