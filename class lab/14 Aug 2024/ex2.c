/*Program to take a value from the user as input all sides of a triangle and check whether the triangle is valid or not. Using if-else.
Case-1
Enter the lengths of the sides of the triangle:
Side 1: 5
Side 2: 7
Side 3: 9
The triangle is valid.

Case-2
Enter the lengths of the sides of the triangle:

Side 1: 3

Side 2: 4

Side 3: 9

The triangle is not valid.*/
#include<stdio.h>
void main()
{
    int s1,s2,s3,t;
    printf("\nEnter the side:");
    scanf("%d%d%d",&s1,&s2,&s3);
    t = s1 +s2 +s3 ;
    if(t%3==0)printf("it is valid");
    else printf("it is not valid");
}