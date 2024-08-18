/*Write a C program for a service center by following given Rules and Guide lines.

* This service center only accepts 2 wheeler ,3 wheeler & 4 wheeler . If any other vehicle 
came to you , you have to show a message that "this service center is not accepting
other than 2 wheeler, 3 wheeler and 4 wheeler".
* If the vehicle is 2 ,3 & 4 only then you have to ask the user what is the age of 
the vehicle.
* If the age your vehicle is above 8 months then only accept the service center 
otherwise you have to show a message that "your  servie will done after a while".
* If the vehicle age is greater than 8 months then show options to the user on the console.
* Options:
1)Enter 1 for tyre problem

2)Enter 2 for fuel problem

3)Enter 3 for engine issue

4)Enter 4 for general services

* If the user enter 1 as input so it is tyre problem statement so you have to show a message "how many tyres you are facing the issue ?", based on the issue on the no of tyres,
generate the bill.
* For example tyre cost Rs. 400 , if the user providing 3 tyre then the bill should be

generated as Rs. 1200 in below format.
Name of the owener
Name of the bike
Issue
Bill
* For fuels problem cost is Rs.1500
* For engine issue cost is Rs.5000
* For general servicing cost is Rs.1000
And generate the bill in the above form*/
/*#include<stdio.h>
void main()
{
    int wheelers ,age;
    char owner[20],bike[20],tyre[20];
    printf("enter the owner name");
    scanf("%s",owner);
    printf("enter the bike name");
    scanf("%s",bike);
    printf("\nEnter the vehicle wheels");
    scanf("%d",&wheelers);
    if(wheelers >=2 && 3 && 4)
    {
    printf(" welcome ") ;
    printf(" age of verical "); 
     scanf("%d",&age);
        {
        if ("age>=8") printf("welcome");

        
            else printf("your  servie will done after a while");

        }
     
  
    
    
    
    }
    else printf("sorry this service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
  
} */
#include <stdio.h>

int main() {
    char nationality;
    char gender;
    int age;

    // Ask for nationality
    printf("Enter your nationality (I/i for Indian): ");
    scanf(" %c", &nationality);

    // Check if the nationality is Indian
    if (nationality == 'I' || nationality == 'i') {
        // Ask for gender
        printf("Enter your gender (M/F): ");
        scanf(" %c", &gender);

        // Check if the gender is male
        if (gender == 'M' || gender == 'm') {
            // Ask for age
            printf("Enter your age: ");
            scanf("%d", &age);

            // Check age eligibility for males
            if (age >= 21 && age <= 50) {
                printf("Congratulations! You are eligible for marriage.\n");
            } else {
                printf("Sorry! You are not eligible for marriage.\n");
            }
        }
        // Check if the gender is female
        else if (gender == 'F' || gender == 'f') {
            // Ask for age
            printf("Enter your age: ");
            scanf("%d", &age);

            // Check age eligibility for females
            if (age >= 18 && age <= 45) {
                printf("Congratulations! You are eligible for marriage.\n");
            } else {
                printf("Sorry! You are not eligible for marriage.\n");
            }
        }
        // Invalid gender input
        else {
            printf("Invalid gender input.\n");
        }
    } 
    // If nationality is not Indian
    else {
        printf("Eligibility check is only for Indian citizens.\n");
    }


}
