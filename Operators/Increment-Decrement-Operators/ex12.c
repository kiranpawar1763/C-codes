#include<stdio.h>
int main()
{
    int a=1,b=7;
    a = a++ + ++b;
    b = ++a + b++;
    printf("a=%d ,b=%d",a,b);

    return 0;
}
/*output:- by vs code
a= 11
b= 20
expretion:-
a = a++ + ++b
b = ++a + b++
a = 1 ,b =7
checked priority:-
a++ + = ++b
condition:-1 a = a++ + ++b
1.a = b++ = 8
 b= 8
2. a + b
    1 + 8 =9
3.a++==> 9 + 1=10
4. a = 10
condition:-2 b = ++a + b++
a= 10
b= 8
checked priority:-
++a ,+ ,=,b++
1 .++a
 10 + 1 = 11
 a==11
2. b= b + a
   b =8 + 11 = 19
   b= 19
3. b++==>19+1=20
   b=20
*/