#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char delimiter;
    char *token;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter delimiter character: ");
    scanf(" %c", &delimiter);

    printf("Sub-strings:\n");

    token = strtok(str, &delimiter);

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, &delimiter);
    }

    return 0;
}