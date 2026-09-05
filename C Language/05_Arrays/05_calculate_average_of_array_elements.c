#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    float sum = 0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}