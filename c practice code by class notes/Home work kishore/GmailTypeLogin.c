// Gmail type login page
#include<stdio.h>
#include<string.h>
void main()
{
    char Userid[30] ,pass[30],cat[30];
    int c=0;
    printf("\nEnter the user Name:");
    scanf("%s",Userid);
    if(strcmp(Userid,"kiran")==0)
    {
                printf("\nEnter the password:");
                scanf("%s",pass);
                if(strcmp(pass,"pawar")==0)
            {
                printf("\nEnter the catche:");
                scanf("%s",cat);
            
                if(strcmp(cat,"mh-15")==0);
                else printf ("invalid catche");
                printf("Welcome back:");

                
               
            }  
              
              else   printf("\nInvalid password");
    }
    
    else  printf("invalid user Name");
}   

