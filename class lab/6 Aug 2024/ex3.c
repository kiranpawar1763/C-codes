/*Write a program to take input for seconds from the user , 
And convert it into Hour, Minutes , Second format.*/
#include<stdio.h>
int main()
{
    int sec;
    int seconds,minutes ,hours;
    printf("enter the seconds");
    scanf("%d",&sec);
  hours = (sec / 3600);
  minutes =(sec%3600)/60;
  seconds= (sec % 3600) % 60;
  
  printf("\n%d  hours %d minutes %d seconds",hours,minutes ,seconds);



    
}
