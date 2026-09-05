#include <stdio.h>

int main()
{
    int decimal;
    int binary[32];
    int i = 0, j;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0)
    {
        printf("Binary: 0\n");
        return 0;
    }

    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary: ");

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}