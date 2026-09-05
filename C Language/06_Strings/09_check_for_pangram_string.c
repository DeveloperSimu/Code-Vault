#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[500];
    int alphabet[26] = {0};
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha((unsigned char)str[i]))
        {
            alphabet[tolower((unsigned char)str[i]) - 'a'] = 1;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (alphabet[i])
            count++;
    }

    if (count == 26)
        printf("The string is a pangram.\n");
    else
        printf("The string is not a pangram.\n");

    return 0;
}