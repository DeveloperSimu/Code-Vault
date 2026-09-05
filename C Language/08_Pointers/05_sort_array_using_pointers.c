#include <stdio.h>

void sort(int *arr, int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main()
{
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, n);

    printf("Sorted array:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}