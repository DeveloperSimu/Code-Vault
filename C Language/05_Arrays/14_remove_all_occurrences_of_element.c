#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to remove: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (arr[i] != element)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    n = j;

    printf("Array after removal:\n");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}