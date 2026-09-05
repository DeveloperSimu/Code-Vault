#include <stdio.h>

int main()
{
    int n, i;
    long long a = 0, b = 1, c;
    long long sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += a;
        }

        c = a + b;
        a = b;
        b = c;
    }

    printf("Sum of Fibonacci numbers at even indexes = %lld", sum);

    return 0;
}