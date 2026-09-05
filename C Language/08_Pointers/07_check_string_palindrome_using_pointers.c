#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *start, *end;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    start = str;
    end = str + strlen(str) - 1;

    while (start < end)
    {
        if (*start != *end)
        {
            palindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if (palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}