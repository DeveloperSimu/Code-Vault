#include <stdio.h>

int main()
{
    const int radius = 10;
    int x, y;

    for (y = -radius; y <= radius; ++y)
    {
        for (x = -2 * radius; x <= 2 * radius; ++x)
        {
            int distance = x * x / 4 + y * y;

            if (distance >= (radius - 1) * (radius - 1) &&
                distance <= (radius + 1) * (radius + 1))
            {
                putchar('*');
            }
            else
            {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}