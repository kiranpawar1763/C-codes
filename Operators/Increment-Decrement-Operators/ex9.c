#include<stdio.h>
int main()
{
    int a=1,b;
    b = ++a + a++* ++ a;
    printf("a=%d,b=%d",a,b);

    return 0;
}

/*
output:-
a=4
b=12
expretion:-
b = ++a + a++* ++a
a = 1
priority:- ++a,*,+,=,a++
1.b=++a==>1+a=2
2.b=++a==>1+2=a=3
3.b=a*a==>b=3*3=9
4.b=a+a==>3+9=12
    b=12
    a++==>a=4
*/






