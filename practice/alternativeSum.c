rite a C program to find the alternate digit sum is 
same or not.
*/
alter
#include<stdio.h>
void main()
{
    int n, digit, even=0, odd=0, position=1;
    printf("\nEnter number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        digit = n%10;
        if(position % 2 == 0)
        {
            even+=digit;
        }else{
            odd+=digit;
        }
        position++;
        n=n/10;
    }
    if(even == odd)
    {
        printf("\nAlternate sum is same");
    }else{
        printf("\nAlternate sum is not same");
    }
}