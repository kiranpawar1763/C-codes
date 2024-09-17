/*Write a C Program to check whether the triangle is an equilateral,
 isosceles or scalene triangle. Using the if-else statement.

Take the inputs from the user.
Case-1 :

Enter the lengths of the sides of the triangle:

Side 1: 5

Side 2: 5

Side 3: 5
Case-2:

Enter the lengths of the sides of the triangle:

Side 1: 4

Side 2: 5

Side 3: 4

The triangle is an isosceles triangle.
Case-3:

Enter the lengths of the sides of the triangle:

Side 1: 3

Side 2: 4

Side 3: 5

The triangle is a scalene triangle.*/
#include<stdio.h>
void main()
{
    int s1 ,s2,s3 ;
    printf("\nEnter the sides:");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3)
    printf("\nThis triangal is equilateral");
     else if(s1==s2 || s2==s3 || s3==s1)
     printf("this triangal is isosceles");
     else printf("triangal is  scalene triangle ");


}