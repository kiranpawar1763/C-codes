#include<stdio.h>
#include<string.h>
int  main()
{
    int s1[10],s2[10],s3[10];
    printf("Enter the string 1 :");
    scanf(" %s",&s1);
    printf("Enter the string 2 :");
    scanf(" %s",&s2);
    strcat(s3,s1);
    strcat(s2,s3);
    puts(s1);
    puts(s2);
}
