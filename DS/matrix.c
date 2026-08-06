#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]);
void addMatrices(int r1, int c1, int r2, int c2, int m1[r1][c1], int m2[r2][c2]);
void multiplyMatrices(int r1, int c1, int r2, int c2, int m1[r1][c1], int m2[r2][c2]);
void traceMatrices(int r1, int c1, int r2, int c2, int m1[r1][c1], int m2[r2][c2]);

int main() {
    int r1, c1, r2, c2, choice;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    int matrix1[r1][c1];
    int matrix2[r2][c2];

    printf("Enter elements for first matrix:\n");
    inputMatrix(r1, c1, matrix1);

    printf("Enter elements for second matrix:\n");
    inputMatrix(r2, c2, matrix2);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add Matrices\n");
        printf("2. Multiply Matrices\n");
        printf("3. Trace of Matrices\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMatrices(r1, c1, r2, c2, matrix1, matrix2);
                break;
            case 2:
                multiplyMatrices(r1, c1, r2, c2, matrix1, matrix2);
                break;
            case 3:
                traceMatrices(r1, c1, r2, c2, matrix1, matrix2);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int r1, int c1, int r2, int c2, int m1[r1][c1], int m2[r2][c2]) {
    if (r1 != r2 || c1 != c2) {
        printf("Addition not possible. Matrices must have the same dimensions.\n");
        return;
    }

    printf("Result of Addition:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", m1[i][j] + m2[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int r1, int c1, int r2, int c2, int m1[r1][c1], int m2[r2][c2]) {
    if (c1 != r2) {
        printf("Multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return;
    }

    int result[r1][c2];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("Result of Multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void traceMatrices(int r1, int c1, int r2, int c2, int m1[r1][c1], int m2[r2][c2]) {
    if (r1 == c1) {
        int trace1 = 0;
        for (int i = 0; i < r1; i++) {
            trace1 += m1[i][i];
        }
        printf("Trace of first matrix: %d\n", trace1);
    } else {
        printf("First matrix is not square. Trace not possible.\n");
    }

    if (r2 == c2) {
        int trace2 = 0;
        for (int i = 0; i < r2; i++) {
            trace2 += m2[i][i];
        }
        printf("Trace of second matrix: %d\n", trace2);
    } else {
        printf("Second matrix is not square. Trace not possible.\n");
    }
}
