#include<stdio.h>
void main()
{
    char s[100];
    int i,w=1;

    printf("Enter the string:");
    scanf("%[^\n]", s);
    int len=0;
    while(s[len] != '\0')
    {
        len++;
    }

    for(i=0;i<len;i++){
        if(s[i]>='A' && s[i]<='Z')
        s[i]+=32;

        if(s[0]>='a' && s[0]<='z')
        s[0]-=32;
    }

    for(i=0;i<len;i++)
    {
    if(s[i]=='.' && s[i+1]==' ' && s[i+2]>='a' && s[i+2]<='z')
    s[i+2]-=32;

    }
    printf("\nString = %s", s);
    
}