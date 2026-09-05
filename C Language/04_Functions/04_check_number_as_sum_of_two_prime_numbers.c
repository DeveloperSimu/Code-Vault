#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            printf("%d = %d + %d\n", n, i, n - i);
            return 0;
        }
    }

    printf("%d cannot be expressed as the sum of two prime numbers.\n", n);

    return 0;
}