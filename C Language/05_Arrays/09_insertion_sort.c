#include <stdio.h>

int main()
{
    int n, i, j, key;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    printf("Array after Insertion Sort:\n");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}