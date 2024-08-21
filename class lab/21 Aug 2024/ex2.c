/*Write a C program that will ask for a person’s name and his/her game score. 
Then it will ask for a second person’s name and score.
 The program will print the winner’s name and also print by how many 

points that person won by comparing the scores. Develop this program by using switch case.*/
#include<stdio.h>
void main()
{
    int score1,score2,com;
    char p1name[20] ,p2name[20];
    printf("\nEnter the  first person name:");
    scanf(" %s",&p1name);
    printf("\nEnter the score:");
    scanf("%d",&score1);
    printf("\nEnter the  second person  name:");
    scanf(" %s",&p2name);
    printf("\nEnter the score:");
    scanf("%d",&score2);

    switch(score1 > score2)
    {
        case 1:
        printf(" person 1 %s is win %d by", p1name,score1 - score2);
        
    }
    switch(score2 > score1)
    {
        case 1:
        printf("person 2 %s is win %d by",p2name,score2 -score1);
        
    }
    switch (score1 == score2)
    {
    case 1:
     printf(" \n %s and %s Both are equal score %d and %d",p1name ,p2name,score1 , score2);
    }
    


}