#include<stdio.h>
int main()
{
    int a= 3;
   printf("%d,%d,%d,%d,%d\n",++a , a++ , a-- , --a,++a);
   printf("%d,%d,%d,%d,%d\n",++a , a*10,a=10, a--, ++a);
  return 0;
}
/*output:-
a=4 ,2 ,3 , 3 ,4
b= 11 ,100 ,10 ,5 , 5
expretion:-
1.++a , a++ , a-- , --a,++a
2.++a , a*10, a--, ++a
a =3
note=:In printf exeution order Right to left and printing left to right 
condition 1 :-
.++a , a++ , a-- , --a,++a
1.++a==>3+1=4
2.--a==>4-1=3
3.a-- ==>3=3-1=2 /this is post increment opretion in post increment first value printed 
                  after opretion perform and continue text opretion to go go next in new value /
4 .a++==>2 =2+1=3
5.++a==>3+1=4
 condition 2:-
 ++a , a*10, a=10,a--, ++a
 continue with condition 1 a - a=4
1.++a==>4+1=5
2.a-- ==> 5-1=4 // but ans is 5 becuase post increment
3. a=10
4.a*10==>10*10=100 // a=100 not stored to continue a=10
5.++a==>10+1=11

*/