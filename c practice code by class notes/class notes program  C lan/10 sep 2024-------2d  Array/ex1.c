
#include<stdio.h>
void main()
{
    int n,r,c,p;
    float a[10][10]={0};
    char name[10][10];

    printf("\nEnter the no of Student:");
    scanf("%d",&n);
    for(r=0;r<n;r++)
    {
        printf("\nEnter %d stu id,name,6 sub marks",r+1);
        scanf("%f %s",&a[r][0],name[r]);
        for(c=1;c<=6;c++)
        {
        scanf("%f",&a[r][c]);
        a[r][7]+=a[r][c];
        if(a[r][c]<35)a[r][9]=-1;
        }
        a[r][8]=a[r][7]/6.0;
    }
    printf("id\tname\ttotal\tAvg\tGrade\n");
    printf("---------------------------------\n");
    for(r=0;r<n;r++)
    {
        printf("%.0f\t%s\t%.0f\t%.2f\t\n",a[r][0],name[r],a[r][7],a[r][8]);
        if(a[r][9]==-1)
        
            printf("failed");
         else if (a[r][8]>=75)
        
            printf("Distinction");

        
        else if (a[r][8]>=65)
        
            printf("1 st class");

        
        else if(a[r][8]>=50)
        
            printf("2 nd class");
               
        else 
        printf("3 rd class");
        
    }

}