/*Write a c program to find the sum of n natural numbers

sample input: 10
sample output: 55*/
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("\nEnter the number:");
//     scanf("%d",&n);
//     n = (n*(n+1)/2);
//     printf("\n sum of natural number %d",n);
// }
// Write a c program to convert the small letter to Capital letter

// sample input: t
// sample Output: T
// #include<stdio.h>
// int main()
// {
//     char lowercase ,uppercase;
//     printf("\nEnter the charecter:");
//     scanf("%c",&lowercase);
//     uppercase = lowercase - 32;
//     printf("%c",uppercase);
//     return 0;

// }
/*Write a c program to find the volume of sphere

Note:: radius you have to read from the user through the scanf

sample input: radius=5;
sample output: Volume=523.60*/
// #include<stdio.h>
// int main()
// {
//     float r , volume;
//     const float pi = 3.14159;
//     printf("\nEnter the redius:");
//     scanf("%f",&r);
//     volume = 4 * pi *r *r*r/3;
//     printf("%.2f",volume);

// }
/*Write a c program that will find the Kinetic Energy
Note:: mass and velocity you have to read from the user through the scanf

Note:: formula: KE=(1/2)*mass*Velocity^2;
sample input: mass=5.5 Velocity=6.9
sample output: KE = 130.9275
*/
// #include<stdio.h>
// void main()
// {
//     float mass,velocity ,KE ;
//     printf("\nEnter the mass:");
//     scanf("%f",&mass);
//     printf("\nEnter the velocity:");
//     scanf("%f",&velocity);
//     KE=0.5*mass*velocity*velocity;
//     printf("%.4f",KE);


// }
/* Write a c program to swap the two numbers using bitwise XOR operator
Note:: Using bitwise XOR Operator Only

sample input: a=5 b=7
sample output: a=7 b=5*/
// #include<stdio.h>
// void main()
// {
//     int a=5,b=7 ;
//     a = a^b;
//     b = b^a;
//     a = a^b;
//     printf("a=%d b=%d",a,b);
// }
/* Write a c program that will find the sum of 2 character ascii values.
sample input: a b
sample output:195
*/
#include<stdio.h>
int main()
{
    char a ,b ;
    int sum ;
    printf("\nEnter the charecter:");
    scanf("%c %c",&a,&b);
    printf("\n%c Enter the Ascii value %d",a,a);
    printf("\n%c Enter the Ascii value %d",b,b);
    sum = a + b;
    printf("\n sum of Ascii char %d",sum);
}