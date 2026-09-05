#include <stdio.h>

long long power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    return base * power(base, exponent - 1);
}

int main()
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0)
        printf("Please enter a non-negative exponent.\n");
    else
        printf("%d^%d = %lld\n", base, exponent, power(base, exponent));

    return 0;
}