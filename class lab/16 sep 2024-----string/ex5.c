/*Write a c program to sort the String in Descending Order  ,after sorting print the result in string format?  

---------
Sample input :- CoreJava

Sample output :
Before sorting the array : CoreJava
After sorting the array : vroeaaJC
*/
#include <stdio.h>
#include <string.h>
 int main()
 {
    char str[100],temp,n;
    printf("Enter the string");
    scanf("%d",n);
    scanf("%s",&str);
    
    for (int i = 0; i < n - 1; i++)
     {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (str[j] < str[j + 1])
             { 
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    printf("%s",temp);
 
 }


