#include <stdio.h>

int main()
{
    int dividend, divisor;
    int quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0)
    {
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}