/*
Question: Write a c program to find the largest number among the 
Three number without using Control flow Statements

sample input: 12 45 32
sample output: 45*/
#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf(" Enter the number :");
    scanf("%d%d%d",&n1 ,&n2,&n3);
     n1 > n2 && n1>n3 && printf("n1 is greater than n2 and n3");
     n2 > n1 && n2>n3 && printf("n2 is greter than n1 and n3");
     n3 > n2 && n3>n1 && printf("n3 is greter than n1 and n2");

}