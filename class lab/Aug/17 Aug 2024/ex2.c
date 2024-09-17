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
#include<stdio.h>
void main()
{
    int wheelers ,age ,choice,trye,Bill;
    char name[20],vehicle[20];
    printf("enter the wheelers: ");
    scanf("%d",&wheelers);

    if(wheelers==2 ||wheelers==3 ||wheelers==4)
    {
        printf("enter the  vehicle age:");
        scanf("%d",&age);
        if(age>=8)
        {
            printf("\n enter the owner name:");
            scanf("%s",name);

            printf("\nenter the vehicle name : ");
            scanf("%s",vehicle);
            
                ch:
                printf("\nEnter 1 for tyre problem:");

                printf("\nEnter 2 for fuel problem:");

                printf("\nEnter 3 for engine issue:");

                printf("\nEnter 4 for general services:") ; 
                scanf("\n%d",&choice);
                    switch (choice)
                    {
                     case 1:
                      printf("\nEnter How many tyres you are facing the issue:");
                    scanf("%d", &trye);
                    Bill = trye * 400;
                    printf("\nName of Owner is %s", name);
                    printf("\nName of Vehicle is %s", vehicle);
                    printf("\nTyre Problem");
                    printf("\nBill Amount is %d", Bill);
                    break;
                    case 2:
                    Bill = 1500;
                    printf("\nname of owner is %s",name);
                    printf("\nname of the vehicle is %s",vehicle);
                    printf("\n fule tank Issue");
                    printf("\n Bill amount is %d",Bill);
                    break ;
                    case 3:
                    Bill =5000;
                    printf("\nName of the Owner is %s",name);
                    printf("\nName of the vehicle %s",vehicle);
                    printf("\nEgine issue ");
                    printf("\nBill Amount %d",Bill);
                    break;
                    case 4:
                    Bill = 1000 ;
                    printf("\nName of the owner is %s",name);
                    printf("\nName of vehicle %s",vehicle);
                    printf("\ngeneral servicing");
                    printf("\nBill Amount %d",Bill);
                    break;
                    default:
                    printf("\nInvalid choice\n");
                    goto ch;
                    break;

                }
                

        }else
             {
                printf("your  servie will done after a while");
             }
    }
     else
        {
            printf("this service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
        }  
}