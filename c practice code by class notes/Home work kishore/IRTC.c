#include<stdio.h>
#include<string.h>
void main()
{
    char user[20],pass[20],cap[20];
    printf("\nEnter the user name:");
    scanf("%s",user);
    printf("\nEnter the pass:");
    scanf("%s",pass);
    printf("\nEnter the capche:");
    scanf("%s",cap);
    if(strcmp(user,"kiran")==0)
    {
        if(strcmp(pass,"pawar")==0)
    
            {
                if(strcmp(cap,"mh-15")==0)
                printf("welcome to IRCTC");
                else
                printf("envalid captcha");
            }
    else printf("envalid pass word");
    }
    else printf("invalid user");
}

 
// #include <stdio.h>
// #include <string.h>

// // Function to simulate a login
// int login(char username[], char password[]) {
//     // Hardcoded credentials for simplicity
//     const char storedUsername[] = "admin";
//     const char storedPassword[] = "password123";

//     // Check if the entered credentials match
//     if (strcmp(username, storedUsername) == 0 && strcmp(password, storedPassword) == 0) {
//         return 1; // Successful login
//     } else {
//         return 0; // Failed login
//     }
// }

// int main() {
//     char username[50];
//     char password[50];
//     int success;

//     printf("Enter Username: ");
//     scanf("%s", username);

//     printf("Enter Password: ");
//     scanf("%s", password);

//     success = login(username, password);

//     if (success) {
//         printf("Login successful!\n");
//     } else {
//         printf("Login failed. Please check your credentials.\n");
//     }


// }
