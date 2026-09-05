#include <stdio.h>

int main()
{
    int num, original, remainder;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }

    if (result == original)
        printf("%d is an Armstrong Number", original);
    else
        printf("%d is not an Armstrong Number", original);

    return 0;
}