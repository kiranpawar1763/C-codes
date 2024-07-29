#include<stdio.h>
int main()
{
    int a=1,b;
    b = ++a + ++a + ++a;
    printf("a=%d, b=%d",a,b);

}
/*
output by vs code:-
a =4
b =10
 output by Dev c++=:
a = 4
b = 12
 expretion:-
 b = ++a + ++a + ++a
 a= 1
 priority:- ++a ,+ ,=
 1. ++a==>1+1=2
 2.++a==>2+1=3
 3.++a==>3+1=4
  hence a=4
4.b=++a + ++a + ++a
  b=4 + 4 + 4
 b=12
 */