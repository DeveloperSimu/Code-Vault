#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, temp;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        int j;

        for (j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (i = 0; i < rows; i++)
    {
        temp = matrix[i][0];
        matrix[i][0] = matrix[i][cols - 1];
        matrix[i][cols - 1] = temp;
    }

    printf("Matrix after interchange across rows:\n");

    for (i = 0; i < rows; i++)
    {
        int j;

        for (j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }

    return 0;
}