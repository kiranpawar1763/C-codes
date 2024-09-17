/*Write a C program to input electricity unit charge and calculate the total 
electricity bill according to the given condition: 

-> For first 50 units Rs. 0.50/unit 

-> For next 100 units Rs. 0.75/unit 

-> For next 100 units Rs. 1.20/unit 

-> For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill. 

How to calculate electricity bill using if else in C programming.
 Program to find electricity bill using if else in C. 
 Logic to find net electricity bill in C program.  
Input as : 
Enter the electricity units consumed: 40
Output as :

Total electricity bill: Rs. 24.00



Input as :

Enter the electricity units consumed: 100

Output as :

Total electricity bill: Rs. 75.00


*/
// #include<stdio.h> 
// void main()
// {

//     int curr;
//     float amount,bill;
//     printf("Enter the current month unit:");
//     scanf("%d",&curr);
//     if(curr<=50) amount = curr * 0.50;
//     else if(curr<=150)amount = 50 * 0.50+(curr-50)*0.75;
//     else if(curr<=250) amount = 50*0.50+100*0.75+(curr-150)*1.20;
//     else 
//        {
//          amount =50*0.50+100*0.75+100*1.20+(curr-250)*1.50;
//        }
//        bill = (amount / 100) * 20 + amount;
//     printf("\nBill Amount is %.2f", bill);
// }
/*Write a C program to input amount from user and print minimum number of notes 
(Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount. 
How to the minimum number of notes required for the given amount in C programming
. Program to find minimum number of notes required for the given denomination.
 Logic to find minimum number of denomination for a given amount in C program


Input as :

Enter the amount: 1275

Output as :

Rs. 500 notes: 2

Rs. 100 notes: 2

Rs. 50 notes: 1

Rs. 20 notes: 1

Rs. 10 coins: 0

Rs. 5 coins: 1

Rs. 2 coins: 0

Rs. 1 coins: 0*/

// #include<stdio.h>
// void main()
// {
//     int n1 ,n2 ,n3,n4,n5,n6,n7,n8,amt;
//     printf("Enter the amount:");
//     scanf("%d",&amt);
//     n1=amt/500;
//     amt=amt%10;
//     n2=amt/200;
//     amt=amt%10;
//     n3=amt/100;
//     amt=amt%10;
//     n4=amt/50;
//     amt=amt%10;
//     n5=amt/20;
//     amt=amt%10;
//     n6=amt/5;
//     amt=amt%10;
//     n7=amt/2;
//     amt=amt%10;
//     n8=amt/1;
//     amt%10;
//     printf("%d %d %d %d %d %d %d %d",n1 ,n2 ,n3,n4,n5,n6,n7,n8);




// }

/*Write a C program to enter month number between(1-12) and 
print number of days in month using if else.
 How to print number of days in a given month using if else in C programming.
  Logic to find number of days in a month in C program. 



Input as :

Enter month number (1-12): 4

Output as :

Number of days: 30
*/
#include<stdio.h>
void main()
{
    int month;
    printf("Enter the month:");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==6||month==7||month==9||month==11)
    {
        printf("31 days in a month");
    }
    else if(month==2)
    {
        printf("28 day in a month");
    }
    
    else
    {
        printf("31 day in a month");
    }
}