#include <stdio.h>

int main()
{
    int n, i;
    long long sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of natural numbers = %lld", sum);

    return 0;
}