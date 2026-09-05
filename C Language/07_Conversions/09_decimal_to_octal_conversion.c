#include <stdio.h>

int main()
{
    int decimal, octal = 0;
    int base = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0)
    {
        remainder = decimal % 8;
        octal += remainder * base;
        decimal /= 8;
        base *= 10;
    }

    printf("Octal: %d\n", octal);

    return 0;
}