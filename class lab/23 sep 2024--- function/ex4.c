/*Write a C program to find the biggest number between three number using the function.
-------

-> create int main() function.
-> create int biggestNumber(int a, int b, int c) function.
-> in main function read three numbers as input and call biggestNumber(int a, int b, int c) function.
 here biggestNumber(int a, int b, int c) function will perform the operation and will
  return biggest number as result to the main function.
-> in main function catch the biggest number which is return
 by biggestNumber(int a, int b, int c) function print the result.


Sample input : Input three positive number : 13 31 19

Sample output : The biggest number is 31.
*/
#include <stdio.h>
#include <stdlib.h>

int biggestnumber(int a, int b, int c)
 {
     
      if(a==b && a==c && b==c){
        printf("All are equal");
          exit(0);
    }

      else if(a==b)
    {
      printf("%d is equal with %d:\n",a,a);
    }
    else if(a==c)
    {
        printf("%d is equal with %d\n",a,a);
    }
   
    else if(b==c){

        printf("%d is equal with %d\n",b,b);
       
    }
   

     if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;//20
    }
    else if(c>a && c>b)
    {
        return c;
    }
   

   
 }  

int main() 
{
    int a,b,c,big;  
    int result;  
    printf("enter the three numbers: ");
    scanf("%d %d %d", &a,&b,&c);  
    int res= biggestnumber(a, b, c);

    printf("%d is big no\n",res);
    

    

    
   return 0; 
} 