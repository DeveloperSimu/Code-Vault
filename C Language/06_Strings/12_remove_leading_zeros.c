#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a number: ");
    scanf("%s", str);

    while (str[i] == '0' && str[i + 1] != '\0')
        i++;

    printf("After removing leading zeros: %s\n", &str[i]);

    return 0;
}