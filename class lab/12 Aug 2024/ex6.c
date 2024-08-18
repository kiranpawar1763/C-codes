/*
Write a c program to convert the small letter to Capital letter
sample input: t
sample Output: T*/
#include<stdio.h>
void main()
{
    char lowercase ,Uppercase;
    printf("\nEnter the char:");
    scanf("%c",&lowercase);
    Uppercase = lowercase -32;
    printf(" \n This is convert the small letter to Capital letter:%c",Uppercase);
    
 }
