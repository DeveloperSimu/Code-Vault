#include <stdio.h>

int main()
{
    int a[100], b[100];
    int n1, n2, i, j;
    int found;

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

    printf("Common elements:\n");

    for (i = 0; i < n1; i++)
    {
        found = 0;

        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                found = 1;
                break;
            }
        }

        if (found)
            printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}