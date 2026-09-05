#include <stdio.h>

int main()
{
    int n, i, j, minIndex, temp;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Array after Selection Sort:\n");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}