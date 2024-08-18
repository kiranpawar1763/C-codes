/*
Question: Write a c program that will find the sum of 2 character ascii values.
sample input: a b
sample output:195*/
#include<stdio.h>
int main()
{
    char a,b;
    int sum ;
    printf(" \nenter the charecter:");
    scanf("%c %c",&a,&b);
    printf("\n%c Ascii value of a is:%d ",a,a);
    printf("\n%c Ascii value of b is:%d ",b,b);
    sum = a + b;
    printf("\n sum of Ascii value  is %d",sum);

}
