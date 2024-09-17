// find the area of square and area of the circal
#include<stdio.h>
int main()
{
    float r ,s,area ,square;
    float  pi=3.14;
    printf("\nEnter the radius of circal: ");
    scanf("%f",&r);
    printf("\nEnter the  side  of square: ");
    scanf("%f",&s);
    area = pi *r *r; //area of circal formula
    square = s*s; // area of square formula
    printf("area of circal %.2f\narea of square %.2f",area,square);



}