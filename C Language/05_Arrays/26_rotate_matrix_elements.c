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

    temp = matrix[0][0];

    for (j = 0; j < cols - 1; j++)
        matrix[0][j] = matrix[0][j + 1];

    for (i = 0; i < rows - 1; i++)
        matrix[i][cols - 1] = matrix[i + 1][cols - 1];

    for (j = cols - 1; j > 0; j--)
        matrix[rows - 1][j] = matrix[rows - 1][j - 1];

    for (i = rows - 1; i > 0; i--)
        matrix[i][0] = matrix[i - 1][0];

    matrix[1][0] = temp;

    printf("Rotated matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }

    return 0;
}