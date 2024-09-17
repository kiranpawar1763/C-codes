/*Write a C program to remove given character from a String.
--------
Sample input : 
Enter a String : Bookstore
Enter the character you want to remove : o
Sample Input
Enter a String : Bookstore
Enter the character you want to remove : o
Sample Output
Resulting String is : Bkstre*/
#include <stdio.h>

int main()
 {
    char str[100], ch, result[100];
    int i, j = 0;

    
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin); 

    
    printf("Enter the character you want to remove: ");
    scanf(" %c", &ch); 

    
    for (i = 0; str[i] != '\0'; ++i) 
    {
        
        if (str[i] != ch) {
            result[j++] = str[i]; 
        }
    }
    result[j] = '\0'; 

    
    printf("Resulting String is: %s", result);

    return 0;
}
