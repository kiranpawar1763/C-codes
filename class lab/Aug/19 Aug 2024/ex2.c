/*You are developing a ticket pricing system for a theme park. 

Write a program that
 takes the following inputs from a customer:



Age (integer)

Height in centimeters (float)

Whether the customer has a VIP pass (y or n)

The program should calculate the ticket price based on the following rules:



Children under 3 years old (inclusive) get in for free.

Children aged 4 to 12 (inclusive) pay Rs.20.

Adults aged 13 to 64 (inclusive) pay Rs.100.

Seniors aged 65 and above pay Rs.50.

However, there are some additional considerations based on height:



If the customer is above 180 cm in height, they pay an extra 50.

If the customer is between 120 cm (inclusive) and 180 cm (inclusive),
 no additional charge applies.

If the customer is below 120 cm, they receive a 50% discount on the base ticket price.

If the customer has a VIP pass, they get a 10% discount on the final ticket price.



Write a program that implements these pricing rules and provides the following output:



The customer's age, height, and VIP pass status.

The calculated base ticket price before any discounts or additional charges.

Any discounts or additional charges applied based on height.

The final ticket price after applying all discounts and charges.

Additionally, if the customer's age is below 0 or height is negative,
 the program should provide an error message.*/
 
 #include<stdio.h>
 void main()
 {
    int price ,age;
    float height, amount, Final;
    char vip;

    age:
    printf("\nEnter the age:");
    scanf("%d",&age);

    printf("\nEnter the height:");
    scanf("%f",&height);

    printf("\ncustomer has a VIP pass (y or n):");
    scanf(" %c",&vip);

    if(age <= 0)
    {
        printf("\nInvalid Age\n");
        goto age;
    }
    else if(age<=3)
    {
        price=0;
        printf("it is free");

    }
    else if (age>=4 &&  age<=12)
    {
        price=20;
        printf("\nEntry price is 20");
    }
    else if(age>=13 && age<=64)
    {
        price=100;
        printf("\nEntry price is 100");
    }
    else
    {
        price=50;
        printf("\nEntry price is 50");

    }

    if (height>=180)
    {
        amount= 50 + price;
    }
    else if(height<=120)
    {
        amount = price + (price / 100) * 50;
    }
    else
    {
        amount = 50;
    }

    if (vip == 'y' || vip == 'Y')
    {
        Final = (amount / 100) * 10 + amount;
    }
    else
    {
        Final = (amount - price) + price;
    }

    printf("\ncustomer's age is %d",age);
    printf("\ncustomer's height is %.2f",height);
    printf("\ncustomer's  have vip pass is %c",vip);
    printf("\nticket price is %d",price);
    printf("\nExtra charges / Discount is %.2f", amount - price);

    printf("\nFinal Ticket Price: Rs. %.2f\n", price);

                        
        


 }