#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int frequency[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
        frequency[(unsigned char)str[i]]++;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (frequency[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}