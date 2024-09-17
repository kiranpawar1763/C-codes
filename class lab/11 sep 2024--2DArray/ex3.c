#include <stdio.h>

int main()
 {
    int n; 
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);

    if (n < 1 || n >= 5) 
    {
        printf("Invalid size! The size should be between 1 and 4.\n");
        return 1; 
    }

    int matrix1[5][5], matrix2[5][5], result[5][5];


    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("Input elements in the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    
    printf("\nThe First matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    
    printf("\nThe Second matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    
    printf("\nThe Subtraction of two matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0; 
}
