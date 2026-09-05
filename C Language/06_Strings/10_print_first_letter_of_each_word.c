#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("First letters of each word: ");

    if (str[0] != '\0' && !isspace((unsigned char)str[0]))
        printf("%c ", str[0]);

    for (i = 1; str[i] != '\0'; i++)
    {
        if (isspace((unsigned char)str[i]) &&
            str[i + 1] != '\0' &&
            !isspace((unsigned char)str[i + 1]))
        {
            printf("%c ", str[i + 1]);
        }
    }

    printf("\n");

    return 0;
}