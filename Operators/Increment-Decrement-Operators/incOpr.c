//Increment (++) Operator example
#include<stdio.h>
int main()
{
    int a = -1;
    printf("%d", a++, ++a, a=10);
    return 0;
}

/*
output
a=-1;
here now we will go by right to left but actual answer will
be printed from Left to right
a=10; => a=>10
++a; ==> 10+1 =>11
a++; ==> 11+1  => 12 here in this case the a value will be incremented after the printing is over
so the final answer will be 11 only.
*/