/*Write a c program that will find the Kinetic Energy
Note:: mass and velocity you have to read from the user through the scanf

Note:: formula: KE=(1/2)*mass*Velocity^2;
sample input: mass=5.5 Velocity=6.9
sample output: KE = 130.9275 */
#include<stdio.h>
int main()
{
    float mass ,velocity,KE;
    printf("\nEnter the miss size:");
    scanf("%f",&mass);
    printf("\nEnter the velocity:");
    scanf("%f",& velocity);
    KE=0.5*mass*velocity*velocity;
    printf("%.4f",KE);


 }