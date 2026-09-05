#include <stdio.h>

int main()
{
    int arr[100], n;
    int *ptr;
    int largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;
    largest = *ptr;

    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) > largest)
            largest = *(ptr + i);
    }

    printf("Largest element: %d\n", largest);

    return 0;
}