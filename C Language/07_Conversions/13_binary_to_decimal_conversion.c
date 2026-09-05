#include <stdio.h>

int main()
{
    long long binary;
    int decimal = 0;
    int base = 1;
    int remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0)
    {
        remainder = binary % 10;

        if (remainder != 0 && remainder != 1)
        {
            printf("Invalid binary number.\n");
            return 0;
        }

        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}