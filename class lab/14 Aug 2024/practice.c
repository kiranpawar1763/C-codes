/*Write a C program to check whether the given number is negative , positive or Zero. 
Take the input from the user and print appropriate statement 

as per your input. Develop it by using control flow statement.
Case-1

---------
Input as :
Enter the number: -1
Output as :
The number is negative.
Case-2
-------
Input as :
Enter the number: 5
Output as :

The number is positive.*/
// #include<stdio.h>
// void main()
// {
//     int n;
// printf("Enter the number:");
// scanf("%d",&n);
// if(n<0)
//     {
//       printf("it is negative");
//     }
//   else if(n==0)
//   {
//     printf("zero");
//   }
//   else
//     {
//         printf("it is positive");


//     }
        

// }
// Program to take a value from the user as input all sides of a triangle
//  and check whether the triangle is valid or not. Using if-else.



// Case-1

// -----------

// Enter the lengths of the sides of the triangle:

// Side 1: 5

// Side 2: 7

// Side 3: 9

// The triangle is valid.



// Case-2

// ------------

// Enter the lengths of the sides of the triangle:

// Side 1: 3

// Side 2: 4

// Side 3: 9

// The triangle is not valid.
// #include<stdio.h>
// void main()
// {
//     int s1 ,s2 ,s3 , sum;
//     printf("enter the side:");
//     scanf("%d%d%d",&s1,&s2,&s3);
//     sum = s1 + s2 + s3;
//     if(sum%3==0)
//     {
//         printf("it is valid");
//     }
//     else
//     {
//         printf("it is not valid");

//     }
// }
/*Design a program that takes a year as input and determines whether it is a leap 
year or not. Consider the leap year rules (divisible by 4,
 but not divisible by 100 unless also divisible by 400) and 
 use if-else statements to provide the appropriate output.



Input as : 

Enter year : 2020



Output as : 

It is a leap year.*/

// #include<stdio.h>
// void main()
// {
//     int y ;
//     printf("enter the year:");
//     scanf("%d",&y);
//     if(y%4 && y==!100 || y % 400)
//         {
//             printf("leap year");

//         }
//     else 
//     {
//         printf("comman year");
//     }
// }

/*Write a program in C to take two integers as input and print whether the 
first one is divisible by the second one using if-else statement.



Input as :

Enter the first integer: 20

Enter the second integer: 5



Output as:

20 is divisible by 5*/
// 
/*Program to take the hours and minutes as input by the user and the show that 
whether it is AM or PM using if-else statement



Case-1:

Enter the hours (in 24-hour format): 10

Enter the minutes: 30



The time is 10:30 AM



Case-2:

Enter the hours (in 24-hour format): 19

Enter the minutes: 45



The time is 07:45 PM*/

// #include<stdio.h>
// void main()
// {
//     int h ,m;
//     printf("enter the hour:");
//     scanf("%d",&h);
//     printf("enter the minutes:");
//     scanf("%d",&m);
    
//     if(h>24 && m>=60)
//         {
//             printf("invalid time format");
//         }
//     else if (h<=12)
//         {
//             printf("time is %d : %d am\n",h,m);

//         }
//         else
//         {
    
//         printf(" time is %d : %d pm\n",h-12,m);
//         }
// }       
// Write a C program to take input from the user about marks he got in 5 subjects.

// Find out the average of the student and give grade as per the below Condition.

// if the avg is greater than or equal to 90 then give grade A.

// if the avg is greater than or equal to 80 then give grade B.

// if the avg is greater than or equal to 70 then give grade C.

// if the avg is greater than or equal to 50 then give grade D.

// if the avg is less than 50 then give grade F.

// Print the Grade and average of the Student.
// #include<stdio.h>
// void main()
// {
//     int s1,s2,s3,s4,s5 , avg;
//     printf("enter the subject marks:");
//     scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
//     avg = (s1 + s2 + s3 + s4 + s5)/5;
//     if( avg >=90)
//     {
//         printf(" gread=A");
//     }
//      else if( avg >=80)
//     {
//         printf(" gread=b");
//     }
//      else if( avg >=70)
//     {
//         printf(" gread=c");
//     }
//      else if( avg >=50)
//     {
//         printf(" gread=d");
//     }
//      else
//      {
//         printf("fail");
//      }
// }
