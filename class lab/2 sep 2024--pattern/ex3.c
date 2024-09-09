/*Que 3 : Write C program to given pattern.
--------

1   10   11   20
2   9    12   19 
3   8    13   18
4   7    14   17
5   6    15   16*/
#include<stdio.h>
void main()
{
    int nr, nc, i, j, a;
    printf("\nEnter row & column: ");
    scanf("%d %d", &nr, &nc);
    a=1;
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
            printf("%4d", a);
            if(nr==3)
            {
                a=a+1;
            }
            else
            a = a+9;
        }
        
        a = a-19;
        printf("\n");
    }
    

}