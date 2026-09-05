#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    i = 0;
    j = strlen(str) - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}