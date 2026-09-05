#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[100], result[300];
    int position;
    int i, j, k = 0;

    printf("Enter main string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter string to insert: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    printf("Enter position to insert: ");
    scanf("%d", &position);

    if (position < 0 || position > strlen(str1))
    {
        printf("Invalid position.\n");
        return 0;
    }

    for (i = 0; i < position; i++)
        result[k++] = str1[i];

    for (j = 0; str2[j] != '\0'; j++)
        result[k++] = str2[j];

    for (i = position; str1[i] != '\0'; i++)
        result[k++] = str1[i];

    result[k] = '\0';

    printf("Result: %s\n", result);

    return 0;
}