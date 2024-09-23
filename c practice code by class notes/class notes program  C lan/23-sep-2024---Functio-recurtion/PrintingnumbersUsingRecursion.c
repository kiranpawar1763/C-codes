#include<stdio.h>
int i=1;
void main()
{
    printf("%d\n",i);
    i++;
    if(i<=10)
    main();`
}