#include<stdio.h>
int prime(int n,int i)//fun def
{
  if(i==1)
  {
  return 1;
  }
  else if(n%i==0)
  {
    return 0;
  }
  else 
  {
    prime(n,--i);
  }
}
void main()
{
int n;
printf("Enter the value :");
scanf("%d",&n);
//puts(prime(n,n/2)?"prime":"composite");
  if(n,n%2==1)
  {
    printf("prime");

  }
  else
  {
    printf("composite");
  }
}