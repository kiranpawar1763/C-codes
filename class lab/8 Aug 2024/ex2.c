//Ascii value addition to use Ascii charecter //
#include<stdio.h>
int main()
{
    char a ,b;
    printf("\nEnter the two digit:");
    scanf("\n%c %c",&a,&b);
    printf("\n%c ASCII value: %d",a,a);
    printf("\n%c ASCII value: %d",b,b);
    //printf("\n sum of %c and %c is %d ",a,b,a + b);
    printf("\nSum of ASCII values: %d\n", a + b);
}