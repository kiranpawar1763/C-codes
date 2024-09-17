/*Write a C program to combine two string in a single String.
---------
Sample input :
Enter first String : Naresh
Enter Second String : it
Sample Input

Enter first String : Naresh
Enter Second String : it
Sample Output
Resulting String is : Nareshit*/
#include <stdio.h>
#include <string.h>

int main()
 {
    char str1[100], str2[100], result[200];  

    
    printf("\nEnter first String: ");
    scanf("%s", str1);

    printf("\nEnter second String: ");
    scanf("%s", str2);
    strcpy(result, str1);    
    strcat(result, str2);    
    
    printf("Resulting String is: %s\n", result);

    return 0;
}
