#include<stdio.h>
void main()
{
    int a=50;
    a++/2;
    printf("a=%d\n",a);
    ++a/2;
    printf("a=%d",a);

}
/*
output
a=51
b=52
a=50
condition 1:-
a++/2
priority:-/,a++
1.a/2
  50/2=25[25 not stored  because of = not used i.e a=50]
2.a++
 50+1=51
 printf(a)==>51
condition 2:-
a=51
 ++a/2
 priority ++a,/
 1.++a
    51+1=a52
 2.a/2
  52/2=26[26 is not stored  becuase of = not used i.e a=52]   


*/