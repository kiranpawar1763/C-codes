/*Write a C program to check whether a Alphabet is vowel or consonant using Switch Case.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the charecter:");
    scanf("%s",&ch);

    switch(ch)
    {
    case 'u':
    case 'o':
    case 'a':
    case 'i':
    case 'e':
    printf("it is vowel");
    break;
    default:
    printf("it is constant");
    break;
    }
    
    
}