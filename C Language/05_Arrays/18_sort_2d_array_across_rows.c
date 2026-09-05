#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols, i, j, k, temp;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols - 1; j++)
        {
            for (k = j + 1; k < cols; k++)
            {
                if (arr[i][j] > arr[i][k])
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }

    printf("Sorted 2D Array:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }

    return 0;
}