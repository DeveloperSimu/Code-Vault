#include <stdio.h>
#include <string.h>

int main()
{
    char binary1[100], binary2[100];
    char result[101];
    int i, j, k = 0;
    int carry = 0;
    int sum;

    printf("Enter first binary string: ");
    scanf("%s", binary1);

    printf("Enter second binary string: ");
    scanf("%s", binary2);

    i = strlen(binary1) - 1;
    j = strlen(binary2) - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;

        if (i >= 0)
            sum += binary1[i--] - '0';

        if (j >= 0)
            sum += binary2[j--] - '0';

        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    result[k] = '\0';

    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }

    printf("Sum = %s\n", result);

    return 0;
}