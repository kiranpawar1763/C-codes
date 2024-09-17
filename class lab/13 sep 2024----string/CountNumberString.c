/*Write a C program to count the number of alphabet present in a given String .
--------
Sample input  : Apple

Sample output  : The count of alphabet is : 5*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    int c=0;
    char str[100];
    printf("Enter the string:");
    scanf("%s",&str);
    c=0;
    for (int i = 0; str[i] != '\0'; i++) 
    if(isalpha(str[i]))
    {
        c++;
    }
    printf("The count of alphabet is %d",c);
    
}
