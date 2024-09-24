#include<stdio.h>
#include<string.h>
    void main()
{
    char s1[100],s2[100];
    printf("Enter the string:");
    scanf("%s",&s1);
    strcpy(s2,s1);
    strrev(s2);
    if(stricmp(s1,s2)==0)
    {
      printf("Palindrome");
    }
    else
        {
            printf("not a pallindrom");
        }
}