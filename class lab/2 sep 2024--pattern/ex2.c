/*Que 2 : Write C program to given pattern.
--------

1   6   11   16  
2   7   12   17
3   8   13   18
4   9   14   19
5   10  15   20*/

 #include<stdio.h>
void main()
{
    int nr, nc, i, j, a;
    printf("\nEnter row & column: ");
    scanf("%d %d", &nr, &nc);
    a=1;
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
            printf("%4d", a);
            a = a+5;
        }
        
        a = a-19;
        printf("\n");
    }

}
#include <stdio.h>

int main() 
{
    int rows , cols ;
    printf("Enter the Row And Column:");
    scanf("%d %d",&rows ,&cols);
    
    // Outer loop for rows
    for (int i = 0; i < rows; i++) 
    {
        // Inner loop for columns
        for (int j = 0; j < cols; j++) 
        {
            // Calculate the value to be printed at each position
            printf("%d\t", i + 1 + j* rows);

            printf("\n");  // Move to the next line after each row is printed
         }
    }
    return 0;
}



