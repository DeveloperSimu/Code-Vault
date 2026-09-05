#include <stdio.h>

int main()
{
    int matrix[10][10];
    int n, i, j;
    int primary = 0, secondary = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (i = 0; i < n; i++)
    {
        primary += matrix[i][i];
        secondary += matrix[i][n - i - 1];
    }

    printf("Primary diagonal sum = %d\n", primary);
    printf("Secondary diagonal sum = %d\n", secondary);
    printf("Total diagonal sum = %d\n", primary + secondary);

    return 0;
}