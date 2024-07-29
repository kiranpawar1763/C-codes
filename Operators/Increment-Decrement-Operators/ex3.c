#include<stdio.h>
void main()
{
    int a=10,b;
    b =a++;
    printf("a=%d,b=%d",a,b);
    a=10;
    b=++a;
    printf("a=%d,b=%d",a,b);

}
/*
output
11 10
11 11
 a=10
 condition 1-:
 b=a++
 checking priority-: =,a++
1.b=a==> b=10
b=10
2.a++==>10++
a=11
condition 2-:
b=++a
priority-:++a,=
1.++a==>11
a=11
2.b=a==>b=11
b=11

 */