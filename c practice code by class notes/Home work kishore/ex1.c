/*READ SALESMAN SALES AMONT AND FIND THE GROSS
SALARY USING BELOW TABLE. SALES >=200000 SALES>=150000 SALES<100000
BASIC=10000 BASIC=10000 BASIC=10000
DA=65.5%OF
BASIC

DA=65.5%OF
BASIC

DA=65.5%OF
BASIC

BONUS=10000 BONUS=5000 BONUS=2000
COMM=10%OF
SALES

COMM=7.5%OF
SALES

COMM=5%OF
SALES

GROSS = BASIC + DA + BONUS + COMMISSION */
#include<stdio.h>
void main()
{
    float basic =10000, da = basic*65.5/100,sales,bonus,comm ,gross;
    printf("Enter the sales Amount:");
    scanf("%f",&sales);
    if(sales>200000){bonus=10000; comm = sales*10/100;}
    else if(sales>=150000){bonus=5000;comm=sales*5/100;}
    else{bonus=2000;comm = sales*5/100;}
    gross = basic + da + bonus + comm;
    printf("\nDa:%.2f",da);
    printf("\nsales:%.2f",sales);
    printf("\nbonus:%.2f",bonus);
    printf("\ncomm:%.2f",comm);
    printf("\nGross :%.2f",gross);



    

}