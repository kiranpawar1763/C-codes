// student result using Aarry
#include<stdio.h>
void main()
{
    int id ,sub[6],tot=0,p=1,i;
    float avg;
    char name[20];
    printf("Enter the studen id,name,6 sub marks:");
    scanf("%d %s",&id,name);
    for(i=0;i<6;i++)
    {
        scanf("%d",&sub[i]);
        tot+=sub[i];
        if(sub[i<=35])
        p=0;
        
    }
    avg = tot/6.0;
    printf("%s tot=%d,avg=%.2f and got %s",name,tot,avg,p?"passed":"failed");
}
