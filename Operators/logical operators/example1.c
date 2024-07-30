// logical operaters //
#include<stdio.h>
int main()
{
    int a , b ,c , d;
    a = b = c = 2;
    d = a++ >= 2 && ++b != c++;
    printf("a=%d, b=%d,c=%d ,d=%d", a, b ,c, d);
    return 0;
}
/* output:-
 by tarbo c++ a= 3 b= 2 c= 3 d= 1
 by vs code a=a=3, b=3,c=3 ,d=1
 */ 