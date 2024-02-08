#include <stdio.h>

// Function to perform matrix addition
void matrixAddition(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrixA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrixB[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    matrixAddition(matrixA, matrixB, result);

    printf("Matrix A:\n");
    displayMatrix(matrixA);

    printf("Matrix B:\n");
    displayMatrix(matrixB);

    printf("Resultant Matrix (A + B):\n");
    displayMatrix(result);

    return 0;
}
