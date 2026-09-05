#include <stdio.h>

int main()
{
    int a[10][10], b[10][10];
    int rows, cols, i, j;
    int equal = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter first matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter second matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (a[i][j] != b[i][j])
            {
                equal = 0;
                break;
            }
        }
    }

    if (equal)
        printf("Matrices are equal.\n");
    else
        printf("Matrices are not equal.\n");

    return 0;
}