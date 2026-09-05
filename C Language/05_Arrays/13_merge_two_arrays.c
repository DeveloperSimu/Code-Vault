#include <stdio.h>

int main()
{
    int a[100], b[100], merged[200];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");

    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");

    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n1; i++)
        merged[i] = a[i];

    for (i = 0; i < n2; i++)
        merged[n1 + i] = b[i];

    printf("Merged array:\n");

    for (i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);

    printf("\n");

    return 0;
}