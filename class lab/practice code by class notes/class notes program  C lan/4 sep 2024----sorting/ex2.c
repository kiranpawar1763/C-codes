//selection short in descending order
 #include<stdio.h>
 void main()
 {
    int a[100],n,i,j,t;
    printf("Enter the Array size 1-100: ");
    scanf("%d",&n);
    printf("Enter the %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++)
    {
      for(j=i+1;j<=n-1;j++)
      {
         if(a[i]<a[j])
         {
             t=a[i];
            a[i]=a[j];
            a[j]=t;
         }
      }
    }
    printf("sorted Elements");
    for(i=0;i<n;i++)
    printf("%4d",a[i]);
 }