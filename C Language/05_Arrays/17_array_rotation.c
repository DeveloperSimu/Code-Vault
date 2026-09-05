#include <stdio.h>

int main()
{
    int arr[100];
    int n, rotations, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of left rotations: ");
    scanf("%d", &rotations);

    rotations = rotations % n;

    for (i = 0; i < rotations; i++)
    {
        temp = arr[0];

        for (j = 0; j < n - 1; j++)
            arr[j] = arr[j + 1];

        arr[n - 1] = temp;
    }

    printf("Array after rotation:\n");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}