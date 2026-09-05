#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j, temp;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (j = 0; j < cols; j++)
    {
        temp = matrix[0][j];
        matrix[0][j] = matrix[rows - 1][j];
        matrix[rows - 1][j] = temp;
    }

    printf("Matrix after interchange across columns:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }

    return 0;
}