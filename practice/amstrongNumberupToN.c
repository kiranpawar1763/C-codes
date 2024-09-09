Write a C program to find all Armstrong numbers between 100 to 999.
Sample Input
153
Sample Output
153 is an Armstrong number because (1)^3+(5)^3+(3)^3 = 153.
*/
amstr
#include<stdio.h>
#include<math.h>
void main()
{
    int i, j, sum, m,  c, digit;
    for(i=100; i<=999; i++)
    {
        m=i;
        j=i;
        sum=0;
        c=0;
        while(j)
        {
            c=c+1;
            j=j/10;
        }

        while(m!=0)
        {
            digit = m%10;
            sum += pow(digit, c);
            m=m/10;
        }

        if(sum == i)
        {
            printf("%d is an Armstrong number because (%d)^3 + (%d)^3 + (%d)^3 = %d.\n", i, i / 100, (i / 10) % 10, i % 10, i);
        }
    }

}
