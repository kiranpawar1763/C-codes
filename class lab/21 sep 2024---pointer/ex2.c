/*)Write a C program to remove all the white space from given 
String using pointer and function.
-------

Sample input : Welcome To Naresh IT
Sample output : WelcomeToNareshITlcome To Naresh IT
Sample output : WelcomeToNareshIT
*/

#include<stdio.h>
void removeSpace();
void main()
{
    int i, j;
    char s[100], *p;
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    p = s;
    int len = 0;
    while(p[len]!='\0')
    {
        len++;
    }

    removeSpace(len, p);    
}

void removeSpace(int len, char *p)
{
    int i;
    for (i = 0; i < len; i++)
    {
        if (p[i] == ' ')
        {
            p[i] = '0';
        }

        if (p[i] != '0')
        {
            printf("%c", p[i]);
        }
    }
}

/*
Enter a string: Welcome To Naresh It
WelcomeToNareshIt
*/
