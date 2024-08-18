/*Program to take the hours and minutes as input by the user and the 
 show that whether it is AM or PM using if-else statement

Case-1:
Enter the hours (in 24-hour format): 10
Enter the minutes: 30
The time is 10:30 AM
Case-2:
Enter the hours (in 24-hour format): 19
Enter the minutes: 45
The time is 07:45 PM
*/
#include<stdio.h>
void main()
{
    int h ,m ;
    printf("enter the hours:");
    scanf("%d",&h);
    printf("enter the minutes:");
    scanf("%d",&m);
    if(h>24 && m >60)printf("invalid time and minutes");
    else if(h<=12)printf("time is %d:%d am\n",h,m);
    else 
     printf("The time is %d:%d PM\n", h - 12, m);
                        
}              

// #include <stdio.h>

// int main() {
//     int hours, minutes;

//     // Taking input from the user
//     printf("Enter the hours (in 24-hour format): ");
//     scanf("%d", &hours);

//     printf("Enter the minutes: ");
//     scanf("%d", &minutes);

//     // Checking if the time is in AM or PM
//     if (hours < 12) {
//         printf("The time is %d:%02d AM\n", hours, minutes);
//     } else {
//         // Converting 24-hour format to 12-hour format for PM
//         hours = hours - 12;
//         printf("The time is %d:%02d PM\n", hours, minutes);
//     }

//     return 0;
// }

