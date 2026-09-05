#include <stdio.h>

int main()
{
    double num;
    char str[50];

    printf("Enter a double number: ");
    scanf("%lf", &num);

    sprintf(str, "%.2lf", num);

    printf("String: %s\n", str);

    return 0;
}