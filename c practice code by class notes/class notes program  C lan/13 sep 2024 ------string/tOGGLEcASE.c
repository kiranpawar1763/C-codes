#include<stdio.h>
void main()
{
    char s[100];
    int i,w=1;

    printf("Enter the string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    if(s[0]>='A' && s[0]<='Z')
    s[0]+=32;
    for(i=0;s[i]!='\0';i++)
    if(s[i]==' ' &&s[i+1]>='A'&&s[i+1]<='Z')
    s[i+1]+=32;
    printf(s);
    
}