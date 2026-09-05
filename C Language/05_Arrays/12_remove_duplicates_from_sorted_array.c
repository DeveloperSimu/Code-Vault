#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    j = 0;

    for (i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    n = j + 1;

    printf("Array after removing duplicates:\n");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}