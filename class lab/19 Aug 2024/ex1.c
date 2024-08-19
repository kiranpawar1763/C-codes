/*Title: Interactive Tea Stall Experience
Introduction:
Imagine strolling down a charming street, enticed by the inviting aroma of 
freshly brewed beverages.
You arrive at a cozy tea stall, greeted by a friendly attendant.
 Prepare for an interactive journey through the Tea Stall Counter!
Scenario:
Welcome and Menu:
You enter the tea stall, warmly welcomed by the attendant:
Attendant: "Welcome to our Tea Stall Counter! Our menu:"

Tea --------------------- Rs. 10

Coffee ------------------ Rs. 20

Cold coffee ------------- Rs. 50

Exit
Attendant: "Choose by entering a number (1-4):"
[User enters choice]
Customize Order:

Based on your choice, the attendant guides you:

[If choice is 1:]

Attendant: "How many cups of refreshing tea?"

[If choice is 2:]

Attendant: "How many cups of aromatic coffee?"

[If choice is 3:]

Attendant: "How many cups of chilled cold coffee?"

[User enters quantity]

Total and Payment:

The attendant shares your order total and awaits payment:

Attendant: "Total for [quantity] cup(s): Rs. [total_price]."

Attendant: "Enter your payment amount: Rs."

[User enters amount_paid]

Attendant: "Change: Rs. [change]."

Continuation or Farewell:
Choose to explore more or conclude your visit:

Attendant: "Explore more or finalize? (Type 'Y' for Yes or 'N' for No):"

[User enters order_again]

[If user wants to continue:]
Attendant: "Certainly, let's explore."

[If user doesn't want to continue:]*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
   float bill ,qty ,price,amount,total,change;
   char order_again;
   int choice;

   menu:
   printf("\nWelcome to our Tea Stall Counter! Our menu:");
   printf("\n1. Tea   Rs. 10");
   printf("\n2. Coffee  Rs. 20");
   printf("\n3. Cold coffee  Rs. 50");
   printf("\n4. Exit");

   printf("\nChoose by entering a number (1-4):");
   scanf("%d",&choice);

   switch(choice)
   {
      case 1:
            price=10;
            printf("\nHow many cups of refreshing tea ?");
            scanf("%f",&qty);
            break;

     case 2:
            price=20;
            printf("\nHow many cups of aromatic coffee?");
            scanf("%f",&qty);
            break;

     case 3:
            price=50;
            printf("How many cups of chilled cold coffee?");
            scanf("%f",&qty);
            break ;

     case 4:
            exit(0);

     default:
            printf("Invalid choice! Please choose a valid option.\n");
            goto menu;

   }     
   total = price * qty;
   printf("\nTotal for %.0f cup(s): Rs. %.2f", qty, total);

   pay:
   printf("\nEnter your payment amount: Rs. ");
   scanf("%f", &amount);

   if(amount > total)
   {
      change = amount - total;
      printf("\nChange: Rs. %.2f", change);
      printf("\nBill Paid");
   }
   else if(amount == total)
   {
      printf("\nBill Paid");
   }
   else 
   {
      printf("\nInsufficient payment. Please pay the full amount\n");
      goto pay;
   }


   printf("\nExplore more or finalize? (Type 'Y' for Yes or 'N' for No): ");
   scanf(" %c", &order_again);

   if(order_again == 'Y' || order_again == 'y')
   {
      printf("\nCertainly, let's explore.");
      goto menu;
   }
   else
   {
      printf("\nThank you for visiting!\n We look forward to serving you again soon!");
   }
}


        
        

   
