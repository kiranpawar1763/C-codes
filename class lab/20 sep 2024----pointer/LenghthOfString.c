/* Write a program in C to calculate the length of a string using a pointer.
-------

Sample input : NareshIt26

Sample output : The length of the given string NareshIt26 is : 10*/
#include<stdio.h>
int stringlenghth(const char * str)
{
const char *ptr = str;
while(*ptr !='\0')
{
    ptr ++;
}
return ptr -str;
}
int main()
{
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    int lenghth =stringlenghth(str);
    printf("lenghth of given string %s is : %d",str,lenghth);
}

