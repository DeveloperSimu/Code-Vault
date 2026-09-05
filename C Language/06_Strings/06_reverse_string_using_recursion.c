#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end)
{
    char temp;

    if (start >= end)
        return;

    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse(str, start + 1, end - 1);
}

int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    reverse(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}