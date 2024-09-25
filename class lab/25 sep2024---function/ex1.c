/*Write a C program to check if two strings are anagrams of each other or not using function.
------

-> create int main() function.
-> create bool isAnagram(char str1[],char str2[]) function. this function will take two string as input and will return true if both String are anagram otherwise will return false.
-> in main function read two Strings and pass it to isAnagram fuction by calling it and print the result.


Sample input:
             First string : listen
             Second string: silent

Sample output: The strings are anagrams.


Sample input:
             First string : hello
             Second string: world

Sample output: The strings are not anagrams.
*/
#include <stdio.h>
#include<string.h>
#include <stdbool.h>
bool isAnagram(char str1[],char str2[])
 {

         if(strlen(str1)!=strlen(str2))
         {
             return false;
         }
         int count[256]={0};
      for (int i = 0; str1[i] && str2[i]; i++)
       {
             count[(unsigned char)str1[i]]++;
             count[(unsigned char)str2[i]]--;
       }
       for(int i=0;i<256;i++)
       {
        if(count[i]!=0)
        {
            return false;
        }
       }
       return true;
     }
 
int main() 
{
    char str1[100],str2[100];  
      
    printf("enter the first string: ");
    scanf("%s",str1);  
    printf("enter the second string:");
    scanf("%s",str2);

    
   //  anagram(str1,str2);
    if (isAnagram(str1, str2))
    {
        printf("it is anagram");
    }
    else
    {
        printf("it is not anagram");
    }

    
    return 0;
}


