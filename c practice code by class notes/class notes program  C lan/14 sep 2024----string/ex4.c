#include<stdio.h>
#include<string.h>
void main()
{
    char s[10][100],t[100];
    int i ,j;
    printf("Enter the 10 names:");
    for(i=0;i<10;i++)
    scanf("%s",s[i]);
    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(stricmp(s[i],s[j])>0)
            {
                strcpy(t,s[i]);
                strcpy(s[j],t);
            }
        }
    }
    printf("sortrd namse");
    printf("------------------\n");
    for(i=0;i<10;i++)
    printf("%s",s[i]);
}