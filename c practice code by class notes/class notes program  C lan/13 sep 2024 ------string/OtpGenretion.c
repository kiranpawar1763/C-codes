#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[10],ch;int i;
    while(1)
    {
        randomsize();
        for(i=0;i<8;i++)
        {
            s[i]=random(10)+48;

        }
        s[i]='\0';
        printf("o t p %s\n",s);
        printf("Resend o t p [y/n]");
        scanf(" %c",&ch);
        if(ch=='n'||ch=='N')
        break;
    }
}