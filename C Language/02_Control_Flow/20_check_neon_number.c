#include <stdio.h>

int main()
{
    int num, square, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    while (square != 0)
    {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }

    if (sum == num)
        printf("%d is a Neon Number", num);
    else
        printf("%d is not a Neon Number", num);

    return 0;
}