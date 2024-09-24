/*Write a function to find the length of a given string (excluding the null character).
-------

-> create int main() function
-> create int getLength(char str[]) function. this function will return length of string
-> in main function read String and call the getLength fuction and print the output.

Sample input : Hello
Sample output: Length of the string: 5


Sample input : ThisIsALongString
Sample output: Length of the string: 17*/
#include<stdio.h>
int getlenghth( char * str)
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
    scanf("%[^]",str);
    int lenghth =getlenghth(str);
    printf("lenghth of given string %s is : %d",str,lenghth);
}

