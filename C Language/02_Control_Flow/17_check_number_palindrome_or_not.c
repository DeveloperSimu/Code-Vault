#include <stdio.h>

int main()
{
    int num, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (original == reverse)
        printf("%d is a Palindrome", original);
    else
        printf("%d is not a Palindrome", original);

    return 0;
}