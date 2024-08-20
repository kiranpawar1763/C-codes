/*Using switch statement write a C Program to take the value from the user as
 input marks of five subjects Physics, Chemistry, Biology, Mathematics, and Computer.
 Calculate percentage and grade according to the following:
  Percentage >= 90% : Grade A, Percentage >= 80% : Grade B, Percentage >= 70% : 
  Grade C, Percentage >= 60% : Grade D, Percentage >= 40% :
   Grade E, Percentage < 40% : Grade F, Using switch statement.

[Note:-Take All the values as Integer]*/
#include<stdio.h>
void main()
{
   int phy,chem,bio,math,comp;
   float per;
   char grade;

   printf("\nEnter 5 subject marks:");
   scanf("%d %d %d %d %d",&phy,&chem,&bio,&math,&comp);

   per=(phy + chem + bio + math + comp) / 5;

   switch((int)per/10)
   {  
      case 10:case 9:
         grade='A';
         break ;

      case 8:
            grade='B';
            break;

      case 7:
            grade ='C';
            break;

      case 6:
            grade ='D';
            break;

      case 5:case 4:
            grade ='E';
            break;

      default :
            grade ='F';
   }
   printf("\nPercentage: %.2f",per);
   printf("\nGrade: %c",grade);
}


/*
percentage : 97.00
Grade: A
*/