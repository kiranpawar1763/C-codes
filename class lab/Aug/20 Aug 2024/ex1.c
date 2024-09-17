/*Write a C to take the value from the user as input the month number and print number
 of days in that month. Using switch statement.
*/
#include<stdio.h>
int main()
{
    int month;
    mon:
    printf("enter the month:");
    scanf("%d",&month);

    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("31 days ");
    break;

    case 4:
    case 6:
    case 9:
    case 11:
    printf("30 days");
    break;

    case 2:
    printf("28 days");
    break;

    default :
    printf("invalid number");
    goto mon;
    } 
}


/*
#include<stdio.h>
int main()
{
    int month;
    mon:
    printf("enter the month:");
    scanf("%d",&month);

    if(month <= 12 && month > 0)
    {
      switch(month)
      {
      case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        printf("31 days ");
        break;

      case 2:
        printf("28 days");
        break;

      default :
        printf("\n30 Days");
      }
    }
    else
    {
      printf("\nInvalid Month\n");
      goto mon;
    }  
}
*/