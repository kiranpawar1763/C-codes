#include<stdio.h>
int main()
{
    int a=1,b;
    b = a++ + a++ + a++ ;
    printf("a=%d,b=%d",a,b);

    return 0;
}
 /*
 output:-
 a=3
 b=4
  expretion:-
   b= a++ + a++ + a++
   a=1
    checked priority:-
    + ,=, a++
     1.b =a++ + a++ + a++
        b= 1 + 1 + 1 = 3
        b=3
    2.a++=>2
      a++=>3
      a++=>4
      a=4
    */