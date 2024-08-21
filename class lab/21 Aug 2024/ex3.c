/*Develop below program using switch case)

Write a C program that will read a float and a character from console. 
The character could be d for deposit or w for withdrawal.
Starting with a Minimum balance of 2000.

*Ask the user to initialize the minimum balance and don't allow 0 and -ve values
 if it is 0 or -ve then print "Ammount Can't be stored".

*If the user want deposit operation then ask 
how much ammount he want to deposit and add that ammount

 with balance and print the balance.

*if the user want withdrwal operation then ask how much ammount 
he want to withdrwal and substract that 

 ammount from the balance and print the balance.

[Note: If the deposit ammount is negetive or 0 print "Invalid ammount".

    If the withdrawl ammount is negetive ,
     0 or greater than balance then print "Invalid ammount"]

Hints:

-------
Declare variables for the amount in float, 
balance in float and transaction code in char types.
Test the transaction code, if ‘d’ it is deposit.
 Test the ammount so that it is not negative.

If the balance is not negative or positive sum-up
the balance.

balance = balance + amount;

Test the transaction code for withdrawal, ‘w’. If the transaction code is ‘w’

Minus the withdrawn amount to update the
balance.
balance = balance - amount;
And print the balance.
*/

#include<stdio.h>
void main()
{
    float bal=2000 ,amt,wi,de;
    char w ,d,choice;
  
    printf("\nD/d Deposit");
    printf("\nW/w Withdrawl");
    printf("\nEnter the choice(w / d):");
    scanf(" %c",&choice);
    
    switch(choice)
    {
      
        case 'w':case 'W':
              printf("\nEnter the amount to be withdrawn:");
              scanf("%f",&wi);

              if(wi>=0 && wi<=bal )
              {
                  bal -= wi;
                  printf("\nAmount %.2f withdrawled \nYour Balance  Rs.%.2f\n", wi, bal);
              
              }
              else
                {
                  printf("\nUnsufficient bal");
                }
                break;
          
        
        case 'd':
        case 'D':
        
                printf("\nHow much ammount he want to deposit:");
                scanf("%f",&de);

                if(de>=0)
                {
                  bal+= de;
                  printf("\nAmount %.2f deposited \nYour Balance  Rs.%.2f\n", de, bal);
                  
                }
                else 
                  {
                    printf("\nInvalid Amount:");
                  }
        
                     break;
          default :
                  printf("\nInvalid choice\n");
         
    }
      if(bal<2000)
      {
        meantain:
         bal+= amt;
        printf("meantain the minimum balance");
       printf("\nEnter amount to add: ");
        scanf("%f", &amt);
        if(amt > 0 && bal+amt >= 2000)
        {
            printf("\nAmount %.2f is stored", amt);
            printf("\nYour Balance is Rs.%.2f", bal+amt);
        }
        else
        {
            printf("\nAmount cannot be stored");
            goto meantain;
        } 
      }
      
}    
