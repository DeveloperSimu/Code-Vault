#include <stdio.h>

int main()
{
    int n, i, key;
    int arr[100];
    int low, high, mid;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in ascending order:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found)
        printf("Element found at position %d.\n", mid + 1);
    else
        printf("Element not found.\n");

    return 0;
}