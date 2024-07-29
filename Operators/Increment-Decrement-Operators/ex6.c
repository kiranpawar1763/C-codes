#include<stdio.h>
void main()
{
    int a=50;
    printf("%d\n",a++);
    printf("%d\n",++a);
}
/*output:-
a=
b=
condition 1:-
a=50
a++
1.a++
   50+1=51 
note:-a = 50[becuse of post increment old  value is 50 after print 50 to a++ and a=51 is go to next opretion]
condition2:-
a=51
1.++a
 1+51=52
  a=52
    
*/