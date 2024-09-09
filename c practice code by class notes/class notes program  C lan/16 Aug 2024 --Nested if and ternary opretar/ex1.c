/*Finding stu grade using below table:
Avg   |  Grade
>=75  |  Distinction
>=60  | 1st class
>=50  | 2nd class
>=35  | 3rd class
<35   |  Fail
*/
#include<stdio.h>

void main()
{
    int  sid,mar,eng,hin,sci,math,sosci,total;
    float avg;
    char name[30];
    printf("\nEnter the name:");
    scanf("%s",name);
    printf("\nEnter sid:");
    scanf("%d",&sid);
    printf("\nEnter the marks\n");
    scanf("%d %d %d %d %d %d ",&mar,&eng,&hin,&math,&sosci,&sci);
    total = mar + eng + hin  + sci + sosci + math;
    avg = total / 6;

    printf("mar=%dmar eng=%d hin=%d sci=%d math=%d sosci=%d total=%d ",mar ,eng ,hin ,sci ,math ,sosci ,total );
    printf("\nTotal avg=%.2f\n",avg);
    if(mar>=35 && eng>=35 && hin>=35 && math>=35 && sci>=35 && sosci>=35)
    {
        if(avg>=75)printf("Distinction");
        else if(avg>=60)printf("1st class");
        else if(avg>=50)printf("2nd class");
        else if(avg>=35)printf("3rd class");
        
    }

   else printf ("fail ");
}