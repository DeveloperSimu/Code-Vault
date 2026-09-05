#include <stdio.h>

int main()
{
    float num;
    char str[50];

    printf("Enter a float number: ");
    scanf("%f", &num);

    sprintf(str, "%.2f", num);

    printf("String: %s\n", str);

    return 0;
}