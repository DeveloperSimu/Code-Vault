#include <stdio.h>

int main()
{
    int matrix[10][10];
    int n, i, j, k;
    double determinant = 1;
    double factor;

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
        if (matrix[i][i] == 0)
        {
            for (k = i + 1; k < n; k++)
            {
                if (matrix[k][i] != 0)
                {
                    for (j = 0; j < n; j++)
                    {
                        int temp = matrix[i][j];
                        matrix[i][j] = matrix[k][j];
                        matrix[k][j] = temp;
                    }

                    determinant = -determinant;
                    break;
                }
            }
        }

        if (matrix[i][i] == 0)
        {
            determinant = 0;
            break;
        }

        determinant *= matrix[i][i];

        for (k = i + 1; k < n; k++)
        {
            factor = (double)matrix[k][i] / matrix[i][i];

            for (j = i; j < n; j++)
                matrix[k][j] -= factor * matrix[i][j];
        }
    }

    printf("Determinant = %.2lf\n", determinant);

    return 0;
}