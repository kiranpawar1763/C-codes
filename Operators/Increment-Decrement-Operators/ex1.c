// opreters //
#include<stdio.h>
int main()
{
    int a=2,b;
    b = a++ + a++ + a++;
    printf("a=%d,b=%d\n",a,b);
    a =2;
    b = ++a + ++a + ++a;
    printf("a=%d,b=%d",a,b);
        return 0;
}
/*output by vs code:-
a = 2
here now we will go by right to left but actual answer will
be printed from Left to right
b = a++ + a++ + a++
a = 5
b = 9
b = ++a + ++a + ++a
a = 5
b = 13
*/