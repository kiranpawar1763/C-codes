/*Write a C program to do a arithmetic operation on two numbers by using Switch Case. 
Take the operators(+,-,*,/,%) as cases and take the input from the user that
 what kind of operation user want to do on two number.
Input as: 

Enter num1 :10

Enter num2 :20

Enter operation : *

O/P as :

---------

Multiplication is :200*/
#include<stdio.h>
#include<math.h>
int main()
{
    float n1,n2;
    char ch;
    printf("\n Enter the first number:");
    scanf("%f",&n1);

    printf("\n Enter the second number:");
    scanf("%f",&n2);

    printf("\n Enter your choice:");
    scanf(" %c",&ch);

    printf("\n Arithmetic operation");
    printf("\n + ");
    printf("\n - ");
    printf("\n * ");
    printf("\n / ");
    printf("\n %% ");
    printf("\n E/e");


      switch(ch)
    {
    case '+':
          printf("\n Addition is %.2f",n1 + n2);
          break;
    case '-':
          printf("\n Subtraction is %.2f",n1 - n2);
          break;
    case '*':
          printf("\n multiplication is %.2f",n1*n2);
          break;
    case '/':
          printf("\n Dividetion is %.2f",n1/n2);
          break;
    case '%':
            printf("\nModulus is %.2f", fmod(n1,n2));
            break;
    case 'E': case 'e':
           exit(0);
    default :
          printf("Invalid choice");
          break;
    
    }
}