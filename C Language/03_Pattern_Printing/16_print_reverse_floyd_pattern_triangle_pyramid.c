#include <stdio.h>

int main()
{
    int rows, i, j;
    int number = 1;
    int total;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    total = rows * (rows + 1) / 2;

    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", number);
            number++;
        }

        printf("\n");
    }

    return 0;
}