#include<stdio.h>
void main()
{
    char s[100], *p=&s[0];
    printf("Enter the string:");
    scanf("%s",s);
    for(; *p;p++)
    printf("%S",p);
}

