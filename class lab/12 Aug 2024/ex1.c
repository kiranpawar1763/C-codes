/*Write a c program to find the volume of sphere

Note:: radius you have to read from the user through the scanf

sample input: radius=5;
sample output: Volume=523.60
*/
#include<stdio.h>
int main()
{
    float r, valume;
    float pi =3.14159;
    printf("\nEnter the redius:");
    scanf("%f",&r);
    valume= 4* pi* r* r* r/3;
    printf("\n volume of sphere:%.2f",valume);
    return 0;

}
