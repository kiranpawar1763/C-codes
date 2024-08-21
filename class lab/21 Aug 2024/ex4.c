/*Write a C program to take user Id as 1001 and Pasword as 1010. 
Ask the user to enter his id, if the id is valid 

then ask the user to enter his password ,if the password is correct then print
 the name of the user, otherwise 
the program will print incorrect Passoword and if the Id doesnot exits,
 the program will print Incorrect Id.

develop this program by using Switch case. */
#include<stdio.h>
void main()
{
    int UserId = 1001 ,pass =1010,uid,p;
    printf("\nEnter the id:");
    scanf("%d",&uid);

    switch(UserId==uid)
    {
        case 1:
             printf("\nEnter the password:");
             scanf("%d",&p);

        switch(pass==p)
        {
        case 1:
             printf("Hi kiran"); 

        }
        default :
            printf("\nId does not exits");
            break ;
   
   
    }


}