//Assci value
#include<stdio.h>
int main()
{
char ch ;
printf("\nEnter The choise:");
scanf("%c",&ch);
if(ch>=97 && ch<=122)printf("lower case charecter");
else if (ch>=65 && ch<=90)printf("Upper case charecter");
else if( ch >=48 && 57)printf("digit");
else if( ch == 32)printf("space");
else printf("special chracter");
return 0;
}