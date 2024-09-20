#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[10],sp[]="@*#$^=",ch;
    int i,n;
    while(1)
    {
        randomsize();
        for(i=0;i<5;i++)
        {
            n=random(4);
            if(n==0)s[i]=random(26)+97;
            else if(n==1)s[i]=random(26)+65;
            else if(n==2)s[i]=random(10)+48;
            else s[i]=sp[random(6)];
        }
        s[i]='\0';
        printf("captcha  %s\n",s);
        printf("Refresh captcha[Y/N]");
        scanf(" %c",&ch);
        if(ch=='N'||ch=='n')
        break;
    }
}