#include <stdio.h>

int main()
{
    int start, end, num, i, isPrime;

    printf("Enter starting interval: ");
    scanf("%d", &start);

    printf("Enter ending interval: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d:\n", start, end);

    for (num = start; num <= end; num++)
    {
        if (num < 2)
            continue;

        isPrime = 1;

        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", num);
    }

    return 0;
}