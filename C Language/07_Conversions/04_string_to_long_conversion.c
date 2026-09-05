#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    long num;

    printf("Enter a number as string: ");
    scanf("%49s", str);

    num = strtol(str, NULL, 10);

    printf("Long integer: %ld\n", num);

    return 0;
}