#include <stdio.h>

int main()
{
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }

        max++;
    }

    printf("LCM = %d", lcm);

    return 0;
}