/*Write a program in C for the multiplication of two square matrices.
-------
Sample input :
Input the rows and columns of first matrix : 2 2
Input the rows and columns of second matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4

Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8

Sample output :
The First matrix is :
1 2
3 4

The Second matrix is :
5 6
7 8

The multiplication of two matrix is :
19 22
43 50
*/

#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input dimensions for both matrices
    printf("Input the rows and columns of first matrix : ");
    scanf("%d %d", &rows, &cols);
    
    printf("Input the rows and columns of second matrix : ");
    scanf("%d %d", &rows, &cols);
    
    // Declare matrices
    int first[rows][cols], second[rows][cols], product[rows][cols];

    // Input first matrix
    printf("Input elements in the first matrix :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    // Input second matrix
    printf("Input elements in the second matrix :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // Initialize the product matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            product[i][j] = 0;  // Set initial value to 0
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < cols; k++) {  // Loop for column of first and row of second
               product[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    // Display results
    printf("\nThe First matrix is :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Second matrix is :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }

    printf("\nThe multiplication of two matrices is :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}


