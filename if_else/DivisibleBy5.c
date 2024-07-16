 #include<stdio.h>
 int main()
 {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n % 5 == 0){
        printf("\n%d Divisible by 5", n);
    }else{
        printf("\n%d is not Divisible by 5", n);
    }
    return 0;
 }