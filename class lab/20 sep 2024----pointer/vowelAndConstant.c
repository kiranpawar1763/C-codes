/* Write a program in C to count the number of vowels and consonants in a string using a pointer.
-------

Sample input : string

Sample output : 

Number of vowels : 1                                             
Number of constant : 5
*/
#include<stdio.h>
int main()
{
    char s[100],*p=&s[0];
    int c=0,v=0;
    printf("Enter the string:");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(*(p+i)=='a'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='e'||*(p+i)=='i')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("\n Total vowel =%d",v);
    printf("\n Total constant=%d",c);
}