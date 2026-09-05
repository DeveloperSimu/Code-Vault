#include <stdio.h>

int main()
{
    int octal, decimal = 0;
    int base = 1, remainder;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal != 0)
    {
        remainder = octal % 10;
        decimal += remainder * base;
        octal /= 10;
        base *= 8;
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}