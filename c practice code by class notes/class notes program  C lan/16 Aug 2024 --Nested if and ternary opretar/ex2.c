//Read a person age and gender. 
//Determine that person is eligible for marriage or not.
#include<stdio.h>
void main()
{
    int age;
    char gender;
    printf("\nEnter the age:");
    scanf("%d",&age);
    printf("\nEnter the gender:");
    scanf(" %c",&gender);
    if(gender=='M' ||gender=='m' && gender=='F'||gender=='f')

        {
            if(age>=21||gender=='f'||gender =='F'&& age>=18) printf("eligible to marriage");
            else printf(" Not eligible to marriage");
        }
   else printf(" Invalid gender");
}