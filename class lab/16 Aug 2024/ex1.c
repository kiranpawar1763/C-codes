/*Write a C program to input electricity unit charge and calculate the 
total electricity bill according to the given condition: 

-> For first 50 units Rs. 0.50/unit 

-> For next 100 units Rs. 0.75/unit 

-> For next 100 units Rs. 1.20/unit 

-> For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill. 

How to calculate electricity bill using if else in C programming. Program to find electricity bill using if else in C. Logic to find net electricity bill in C program.  
Input as : 
Enter the electricity units consumed: 40
Output as :
Total electricity bill: Rs. 24.00
Input as :
Enter the electricity units consumed: 100
Output as :
Total electricity bill: Rs. 75.00*/
#include<stdio.h>
int main()
{
    int unit  ;
    float amount ,total;
    printf("\nEnter the unit to be used:");
    scanf("%d",&unit);
    if(unit<=50)amount = unit*0.50 ;
     else if(unit<=150)amount = 50*0.50+(unit-100)*0.75 ;
     else if (unit<=250)amount = (unit-50)*0.50+(unit-100)*0.75+unit*1.20;
     else amount =unit *1.50;
     total=amount*20/100;
     total = total+amount;
     printf("total bill amount:%.2f",total);
     return 0;

}
/*
#include<stdio.h>
void main()
{
    int units;
    float billAmount, total;
    printf("\nEnter Units: ");
    scanf("%d",&units);

    if(units <= 50)
    {
        billAmount = units * 0.50;
    }
    else if(units <= 150)
    {
        billAmount = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if(units <= 250)
    {
        billAmount = 50 * 0.50 + 50 * 0.75 + (units - 100) * 1.20;
    }
    else
    {
        billAmount = 50 * 0.50 + 50 * 0.75 + 100 * 1.20 + (units - 200) * 1.50;
    }

    total = (billAmount / 100) * 20 + billAmount;
    printf("\nBill Amount is %.2f", total);
}
*/