#include<stdio.h>
int main()
{
    int a=1,b=7,c;
    c= a+++b;
    printf("a=%d , b=%d,c=%d",a,b,c);
return 0;
}
/*output:-
a = 2
b = 7
c = 8
expretion:-
a=1 ,b=7
c= a+++b
checked priority:-
 +,=,a++
 1.c=a+b
    c=1+7=8
    c= 8
2.a++ ==>1+1=2
a=2
   */
  