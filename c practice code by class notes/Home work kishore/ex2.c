/*ELECTRICITY BILL GENERATION
Units Unit price
1-50    |  1.45
51-100  |  2.80
101-200 |  3.05
201-300 |  4.75
301-500 |  6.00
>500    |   6.25
*/
#include<stdio.h>
#include<string.h>
int main()
{
    long curr,pre ,meterNo,unit;
    int Amount;
    char name;
    printf("\nEnter the meter number:");
    scanf("%ld",&meterNo);
    printf("\nEnter the cust name:");
    scanf("%s",&name);
    printf("\nEnter the previous unit:");
    scanf("%ld",&pre);
    printf("\nEnter the current unit:");
    scanf("%ld",& curr);
    unit = curr - pre ;
    if(unit<=50) Amount=unit*1.45;
        else if(unit<=100) Amount=50*1.45+(unit-50)*2.8;
     else if(unit<=200)Amount=50*1.45+50*2.8+(unit-100)*3.05;
      else if(unit<=300)Amount=50*1.45+50*2.8+100*3.05+(unit- 200)*4.75;
        if(unit<=500)Amount=50*1.45+50*2.8+100*3.05+100*4.75+(unit-300)*6;
        else Amount=50*1.45+50*2.8+100*3.05+100*4.75+200*6+(unit- 500)*6.25;
        if(Amount<50) Amount=50;
        printf("Total Bill:%d",Amount);
}

 
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// long serno,pre,cur,units;
// char name[20];
// float amt;

// printf("Enter service no ");
//  scanf("%ld",&serno);

// printf("\nEnter consumer name ");
//  scanf("%c",&name);
// printf("\nEnter previous month reading "); 
// scanf("%ld",&pre);

// current:
// printf("\nEnter current month reading "); 
// scanf("%ld",&cur);

// if(cur<pre){puts("\aCheck current month reading");
//  goto current;}
// units = cur - pre;
// if(units<=50) amt=units*1.45;
// else if(units<=100) amt=50*1.45+(units-50)*2.8;
// else if(units<=200)amt=50*1.45+50*2.8+(units-100)*3.05;
// else if(units<=300)amt=50*1.45+50*2.8+100*3.05+(units- 200)*4.75;
// else
// if(units<=500)amt=50*1.45+50*2.8+100*3.05+100*4.75+(units
// -300)*6;
// else amt=50*1.45+50*2.8+100*3.05+100*4.75+200*6+(units- 500)*6.25;
// if(amt<50) amt=50;

// printf("Amount=%.2f",amt);
// }