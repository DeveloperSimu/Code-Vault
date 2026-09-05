#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0)
    {
        printf("Runtime Error: Division by zero is not allowed.\n");
        return 1;
    }

    printf("Result = %d\n", a / b);

    return 0;
}