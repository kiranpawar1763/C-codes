#include<stdio.h>
int main()
{
    int a=1,b;
    b = ++a +a-- + --a a++;
    printf("a=%d,b=%d",a,b);
    return 0;

}
/*
output:-
a=
b=
expretion:-
b = ++a + a-- + --a a++
a=1
checked priority:-
    ++a, --a, +, =
1.b = ++a
    1+1=2
2.b = --a
    1-2 =1
3.b=a + a + a +a
  b= 1 + 1  + 1 + 1=4
4. b = 4
5.a++==>a+1=2
6.--a==>2-1=1
a=1
*/