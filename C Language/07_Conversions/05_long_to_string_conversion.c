#include <stdio.h>

int main()
{
    long num;
    char str[50];

    printf("Enter a long integer: ");
    scanf("%ld", &num);

    sprintf(str, "%ld", num);

    printf("String: %s\n", str);

    return 0;
}