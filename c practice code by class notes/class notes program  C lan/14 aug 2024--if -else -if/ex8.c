// lower case to Upper case
#include<stdio.h>
int main()
{
    char ch ;
    printf("\nEnter the charecter:");
    scanf("%c",&ch);
    if(islower(ch))ch=tupper(ch);
    else ch==tolower(ch);
    printf("%c",ch);

}