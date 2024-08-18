/*Write a C program to take input from the user about marks he got in 5 subjects.
Find out the average of the student and give grade as per the below Condition.
if the avg is greater than or equal to 90 then give grade A.
if the avg is greater than or equal to 80 then give grade B.
if the avg is greater than or equal to 70 then give grade C.
if the avg is greater than or equal to 50 then give grade D.
if the avg is less than 50 then give grade F.
Print the Grade and average of the Student.*/


#include <stdio.h>

int main() 
{
    int s1 ,s2 ,s3,s4,s5 ,sum,avg;
    char grade;
    printf("Enter the marks:");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
     sum= (s1 + s2 + s3 + s4 + s5);
    
    // Calculate average
     avg = sum / 5;
    
    if (avg >= 90) 
      {
            grade = 'A';
      } 
    else if (avg >= 80)
      {
        grade = 'B';
      } 
    else if (avg >= 70)
      {
        grade = 'C';
      }
     else if (avg >= 50) 
     {
        grade = 'D';
     } else 
     {
        grade = 'F';
     }
    // Print grade and average
    printf("\nAverage: %.2d", avg);
    printf("\nGrade: %c", grade);
    
    return 0;
}
