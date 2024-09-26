#include<stdio.h>
void main()
{
    char s[100],*p=&s[0];
    printf("Enter the string:");
    scanf("%[^\n]",s);
    for( ;*p!='\0';p++);

    printf("Lenghth=%d",p-s);
}