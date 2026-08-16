#include<stdio.h>
void main()
{
    int r1,r2,c1,c2,i,j; //Talking Local Variables
    printf("Enter the row for first matrix:\t");
    scanf("%d",&r1);
    printf("Enter the col for first matrix:\t");
    scanf("%d",&c1);
    printf("Enter the row for second matrix:\t");
    scanf("%d",&r2);
    printf("Enter the row for second matrix:\t");
    scanf("%d",&c2);
    int matrixA[r1][c1], matrixB[r2][c2];
    // Input values for the first matrix
    printf("\nEnter values for the first matrix:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
           // printf("matrixA[%d][%d] = ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
        printf("\n");
    }
    // Input values for the second matrix
    printf("\nEnter values for the second matrix:\n");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
           // printf("matrixB[%d][%d] = ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
        printf("\n");
    }
    // Display the first matrix
    printf("\nThe first matrix is:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            printf("%d\t", matrixA[i][j]);
        }
        printf("\n");
    }
    // Display the second matrix
    printf("\nThe second matrix is:\n");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            printf("%d\t", matrixB[i][j]);
        }
        printf("\n");
    }
}