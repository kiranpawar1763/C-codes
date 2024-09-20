#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];int i,w=1;
    printf("Enter the string:");
   gets(s);
    for(i=0;s[i]!='\0';i++)
    if(s[i]==' ' && s[i+1]!=' ')w++;
    if(s[0]== ' ')w--;
    if(s[i-1]==' ')w--;
    if(s[0]=='\0')w--;
    printf("No of words=%d",w);
}