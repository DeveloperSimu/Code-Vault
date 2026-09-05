#include <stdio.h>
#include <math.h>

int main()
{
    int matrix[10][10];
    int n, i, j;
    double sum = 0;
    int trace = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);

            sum += matrix[i][j] * matrix[i][j];

            if (i == j)
                trace += matrix[i][j];
        }
    }

    printf("Normal = %.2lf\n", sqrt(sum));
    printf("Trace = %d\n", trace);

    return 0;
}