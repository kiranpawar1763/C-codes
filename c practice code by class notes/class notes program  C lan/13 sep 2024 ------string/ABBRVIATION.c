#include<stdio.h>
void main()
{
    char s[100]; int i,w=1;
    printf("Enter the string:");
    scanf("%[^\n]",s);
    if(s[0]!=' ')
    printf("%c",s[0]);
    for(i=0;s[i]!='\0';i++)
    if(s[i]==' ' &&s[i+1]!=' ')
    printf("%c",s[i+1]);
}