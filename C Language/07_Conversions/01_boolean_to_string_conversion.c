#include <stdio.h>

int main()
{
    int value;
    char result[6];

    printf("Enter boolean value (0 or 1): ");
    scanf("%d", &value);

    if (value == 1)
        sprintf(result, "true");
    else if (value == 0)
        sprintf(result, "false");
    else
    {
        printf("Invalid boolean value.\n");
        return 0;
    }

    printf("String: %s\n", result);

    return 0;
}