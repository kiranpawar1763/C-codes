//Finding lower / upper / digit / space / special 
#include<stdio.h>
void main()
{
    char ch ;
    printf("\nEnter the choise:");
    scanf("%c",&ch);
    if(ch>='a' && ch <='z')printf("lower  case charecter");
    else if(ch>='A'&& ch <='Z')printf("Upper case charecter");
    else if(ch>='0' && ch<='9')printf("digit");
    else if(ch==' ')printf("space");
    else printf("special charecter");
}