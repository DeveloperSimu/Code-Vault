#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:");
    printf("\nFirst number = %d", num1);
    printf("\nSecond number = %d", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n\nAfter swapping:");
    printf("\nFirst number = %d", num1);
    printf("\nSecond number = %d", num2);

    return 0;
}