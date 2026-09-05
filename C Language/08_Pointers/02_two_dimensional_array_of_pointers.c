#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30, d = 40;
    int *ptr[2][2];

    ptr[0][0] = &a;
    ptr[0][1] = &b;
    ptr[1][0] = &c;
    ptr[1][1] = &d;

    printf("Array of pointers:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", *ptr[i][j]);
        }

        printf("\n");
    }

    return 0;
}