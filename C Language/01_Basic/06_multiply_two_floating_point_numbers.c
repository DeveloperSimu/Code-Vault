#include <stdio.h>

int main()
{
    float num1, num2, result;

    printf("Enter first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter second floating-point number: ");
    scanf("%f", &num2);

    result = num1 * num2;

    printf("Multiplication = %.2f", result);

    return 0;
}