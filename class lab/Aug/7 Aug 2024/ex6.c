/*Write a 'C' program to take the number of days and convert into (days:months:years)
--------
Sample input : int days = 500
Sample Output :  1 year 4 month and 15 days. */

#include <stdio.h>

int main() {
    int days, years, months, remaining_days;

    // Input number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Convert days to years, months, and days
    years = days / 365;
    days = days % 365;
    months = days / 30;
    remaining_days = days % 30;

    // Print the result
    printf("%d year%s %d month%s and %d day%s.\n", 
    years, years > 1 ? "s" : "",
    months, months > 1 ? "s" : "",
    remaining_days, remaining_days > 1 ? "s" : "");

    return 0;
}

