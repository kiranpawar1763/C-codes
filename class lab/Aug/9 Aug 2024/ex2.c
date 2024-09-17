/*Write a C program to find the given number is even or odd. 
Take the input from the console by using scanf().
Sample Input
Enter a number : 12

Enter a number : 13

Sample Output
12 is an Even number.

13 is an Odd number.*/
// #include<stdio.h>
// void main()
// {
//     int n ,even,odd;
//     printf("\nEnter the number:");
//     scanf("%d",&n);
//    printf("%s\n", (n & 1) == 0 ? "even" : "odd");// Using bitwise AND to check if the  number is even or odd

//  }

 #include<stdio.h>
 int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    n%2==0 && printf("EVEN") || printf("ODD");
    return 0;
}