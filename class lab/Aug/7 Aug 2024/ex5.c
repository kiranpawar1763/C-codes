/*Write a 'C' program to take the marks of a student in 5 subjects 
as input and determine how many subjects have marks greater than or equal to 35
 and how many have marks less than 35. 
  The program should not use any control statements (if, else, switch, etc.)
   or the ternary operator. 

Sample input : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20
Sample Output : Pass in 3 subject and fail in 2 subject.  */

#include<stdio.h>

int main() {
    int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20;
    int pass, fail;

    // Calculate the number of subjects with marks >= 35
    pass = (sub1 >= 35) + (sub2 >= 35) + (sub3 >= 35) + (sub4 >= 35) + (sub5 >= 35);

    // Calculate the number of subjects with marks < 35
    fail = 5 - pass;

    // Print the result
    printf("Pass in %d subjects and fail in %d subjects.\n", pass, fail);

    return 0;
}
