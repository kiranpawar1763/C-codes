#include<stdio.h>
int main()
{
     int  pin=4,c=0; 
     WELCOME:
     printf("\nEnter the Pin:");
     scanf("%4d",&pin);
     START:
     if(pin==1234 )printf("\nwlcome How are you");
     else 
     {
        c++;
        if(c==3)printf("\nyour card block next 24 hours");
        else printf("\nInvalid pin");
        goto WELCOME;

     }
      
     
     

}