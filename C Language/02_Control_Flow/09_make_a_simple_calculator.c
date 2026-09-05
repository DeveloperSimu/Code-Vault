#include <stdio.h>

int main()
{
    char operator;
    double num1, num2;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
    {
        case '+':
            printf("Result = %.2lf", num1 + num2);
            break;

        case '-':
            printf("Result = %.2lf", num1 - num2);
            break;

        case '*':
            printf("Result = %.2lf", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2lf", num1 / num2);
            else
                printf("Division by zero is not allowed.");
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}