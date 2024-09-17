/*Without using control statments Write a C program to determine the next 
or previous multiple of 10 for a given two-digit number. 
  The program should follow these rules:
 If the last digit of the given number is greater than or equal to 5,
  the program should print the next multiple of 10.
If the last digit of the given number is less than 5, 
the program should print the previous multiple of 10..
Sample input : int a = 34 , b = 25 , c = 86;
Sample Output : 30 , 30 , 90 */
#include<stdio.h>
void main()
{
    int n ;                                                                                                                        
    printf("\nEnter the value n:");
    scanf("%d",&n);
     n%10 >=5&& printf("\n%d ",(n/10+1)*10) || printf(" \n%d ",(n/10)*10);


}
---------------------or-------------------------------
#include<stdio.h>
void main()
{
    int n ,prev ,next;
    printf("\nEnter the value:");
    scanf("%d",&n);
     next =( n/10+1)*10;
     prev =(n/10)*10;
     n%10>=5&& printf("\nNext mul %d is %d",n,next)||printf("\nprev mul is %d is %d",n,prev);
    




}
