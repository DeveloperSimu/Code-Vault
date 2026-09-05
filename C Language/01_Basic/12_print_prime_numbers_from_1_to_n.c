#include <stdio.h>

int main()
{
    int n, num, i, isPrime;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (num = 2; num <= n; num++)
    {
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
        {
            printf("%d ", num);
        }
    }

    return 0;
}