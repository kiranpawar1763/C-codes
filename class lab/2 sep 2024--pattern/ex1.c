/*Que 1 : Write C program to given pattern.
--------

1   2   3   4   5
10  9   8   7   6
11  12  13  14  15
20  19  18  17  16*/

#include<stdio.h>
void main()
{
    int nr, nc, i, j, a=1, rev=0;
    printf("Enter the number:");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        if(i%2==0)
        {
            rev = a + nc - 1;
            for(j=nc; j>=1; j--)
            {
              printf("%4d", rev--);
            }
            a += nc;
        }
        else{
          for(j=1; j<=nc; j++)
          {
            printf("%4d", a++);
          }
        }
    printf("\n");
    }   
    }

  /*
  #include<stdio.h>
void main()
{
    int  r ,c,n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=1;
    for(r=1;r<=n;r++)
    {
         
        
        for(c=1;c<=n;c++)
        {
           if(r%2==1)
          {
            printf("%4d",a++);
          }
          else
          {
            printf("%4d",--a);
          }

       
     }
        a+=n;
    printf("\n");
    }
    
 
}
*/
  
    