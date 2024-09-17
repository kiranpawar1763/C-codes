/*Write a C program that takes an hour in the 24-hour format as input and
 identifies the time of day as "Morning," "Afternoon," "Evening," or "Night." 
 Implement this using a series of if statements. Ensure that the program also checks
  for invalid input, displaying an appropriate message 
  if the entered hour is not within the valid range (0-23).
   Present the program with a suitable title and header for clarity.
Input as :
Enter the hour (24-hour format): 13
Output as :
It's Afternoon.*/

// #include<stdio.h>
// int main()
// {
//     int hour;
//     printf("\nEnter the time");
//     scanf("%d",&hour);
//     if(hour<6 && hour >12);
//     printf("it is mor");
//     elseif  (hour<12 && 16>);
//     printf("\nit is aftarnoon");

// }
#include <stdio.h>

int main() {
    // Program title and header
    printf("Time of Day Identifier\n");
    printf("======================\n\n");

    int hour;

    // Prompt the user to enter the hour
    printf("Enter the hour (24-hour format): ");
    scanf("%d", &hour);

    // Check for valid input
    if (hour < 0 || hour > 23) {
        printf("Invalid input! Please enter an hour between 0 and 23.\n");
    } else {
        // Determine the time of day
        if (hour >= 5 && hour < 12) {
            printf("It's Morning.\n");
        } else if (hour >= 12 && hour < 17) {
            printf("It's Afternoon.\n");
        } else if (hour >= 17 && hour < 21) {
            printf("It's Evening.\n");
        } else {
            printf("It's Night.\n");
        }
    }

    return 0;
}
