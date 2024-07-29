#include<stdio.h>
void main()
{
    int a=50;
    a=a++/2;
    printf("a=%d\n",a);
    a=++a/2;
    printf("a=%d",a);

}
/*
output
a=25
b=13
 condition:-1
 a=a++/2
 checked priority:-/,=,a++
 1.a/2
    50/2=25
2 a=25
3.a++==>26
condition:-2
a=26
a=++a/2
checked priority:- ++a ,/,=
1.++a
 26+1=27
2.a/2
  27/2=13
3.a=13 
 */