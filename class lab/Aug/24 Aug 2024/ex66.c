/*Write a C program to find the alternate digit sum is same or not.
Sample Input
12345

1+3+5=9

2+4=6


12122

1+1+2=4

2+2=4*/
#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    int len, i, sum_odd = 0, sum_even = 0;

    printf("Enter a number: ");
    scanf("%s", num);

    len = strlen(num);

    for (i = 0; i < len; i++) {
        if (i % 2 == 0) {
            sum_odd += num[i] - '0'; // Convert from char to int
        } else {
            sum_even += num[i] - '0'; // Convert from char to int
        }
    }

    if (sum_odd == sum_even) {
        printf("Alternate digit sum is the same: %d = %d\n", sum_odd, sum_even);
    } else {
        printf("Alternate digit sum is not the same: %d != %d\n", sum_odd, sum_even);
    }

    return 0;
}
Write a C program to find the given number is a step number or not.

If the adjacent digit difference is 1 then it is a step number.
Sample Input
1234
Sample Output
It is a step number.

Write a C program that takes a number as input from the user and determine whether the number is a neon number or not. Develop it by using while loop.
Sample Input
input 9
Sample Output
9 is neon number

Write a C program that takes a number as input from the user and determines whether it is a spy number of not, DEVELOP this by using while loop.

A Spy number is a number where the sum of its digits is equal to its product of its digits.
Sample Input
1124
Sample Output
1124 is spy number
Explanation
A Spy number is a number where the sum of its digits is equal to its product of its digits. For Example : 1124 is a spy number , because the sum of its digits is 1+1+2+4 = 8 and product of its digits is equal to 1*1*2*4 = 8..