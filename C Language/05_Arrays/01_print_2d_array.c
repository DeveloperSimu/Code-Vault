#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int arr[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter array elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("2D Array:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}