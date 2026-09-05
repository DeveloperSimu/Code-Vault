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
    int start, end, i;

    printf("Enter starting interval: ");
    scanf("%d", &start);

    printf("Enter ending interval: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}