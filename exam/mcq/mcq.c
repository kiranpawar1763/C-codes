
#include<stdio.h>
/*void main()
{
    int a=5 ;
    a += 3 * 2;
    printf("%d",a);
}*/
/* condition:-
a += 3 * 2
checked priority:-* = +
3 *2 = 6
a+=
6 +5=11
*/
// Que 2//
/*#include<stdio.h>
int main() {
int a = 5;
int b = 10;
int c = 15;
int result = a++ * ++b - - -c;
printf("result = %d\n", result);
return 0;
}*/
/* condition:-
a++ * ++b - - -c;
priority:- ++b --c  = * - a++
++b==>10+1=11
--c==>15-1=14
a++ * ++b
5*11=55
++b -c
55 - 14=41
a++==>41+1=42
a=42

*/
//Que 3// out put wrong
//include<stdio.h>
/*int main() 
{
int x = 3;
int y = 2;
int z = x++ * (x + y) - y--;
printf("z = %d\n", z);
return 0;
}*/
/* condition:-
z = x++ * (x + y) - y--;
priority :- () = * - x++ y --
1.(x+y)==>3+2=5
2.x++ * 5 ==> 15
3. 15 -2==14
4.x++==> 14+1=15
5.y--==> 14
 
*/
//que 4 // check wrong output

/*
int main() {
int x = 10;
int y = 5;
int z = x - - - y;
printf("x = %d, y = %d, z = %d\n", x, y, z);
return 0;
}*/
/*condition:-
z= x - - - y
priority: --y - =
 1.--y ==>5-1=4
 y=4
 2. z=x-y==>10-4=6
  z=6
 out put:-
 a =10 
 y =4
 z =6

 */
// Que 5 // pending
/*int main() 
{
int x = 3;
int y = 2;
int z = x++ * (x + y) - - -y;
printf("z = %d\n", z);
return 0;
}/*

/*
 conditio:- 
z = x++ * (x + y) - --y;
priority [(), --y, *, -, x++]
1.x++ => x=x+1 => 3+1 => 4 => x=4 later updeted
2.() => (x+y) => (4+2) => 6
3.--y => y=y-1 => 2-1 => 1 => y=1
4.* => x*6 => 3*6 => 18 => z=18
5.- => z=z-y => 18-1 => 17 => z=17
hence, answer is 
x = 4
y = 3
z = 17
 
 */
// Quetion 6 //
/*
int main() {
int x = 15;
int y = 2;
int z = x / y + x % y;
printf("z = %d\n", z);
return 0;
}*/
/* condition:-
   Z = x / y + x % y
   priority / % =
   z= x/y=15/2=7
    z= x%2= 15 % 2= 1
     x + y =7+1=8
     z=8*/

     //Que 7//
     /*int main() 
     {
        int a = 10;
        int b = 20;
        int result = (a > b) && (b < a++) || (a++ < b);
        printf("result = %d\n", result);
        return 0;
    }
 /*  condition:-
     priority:-*/