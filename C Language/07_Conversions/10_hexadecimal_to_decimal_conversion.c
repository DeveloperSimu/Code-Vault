#include <stdio.h>

int main()
{
    char hex[20];
    int decimal;

    printf("Enter a hexadecimal number: ");
    scanf("%19s", hex);

    sscanf(hex, "%x", &decimal);

    printf("Decimal: %d\n", decimal);

    return 0;
}