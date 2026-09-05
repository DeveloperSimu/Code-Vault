#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter index: ");
    scanf("%d", &index);

    if (index >= 0 && index < strlen(str))
    {
        printf("Code point at index %d = %d\n",
               index, (unsigned char)str[index]);
    }
    else
    {
        printf("Invalid index.\n");
    }

    return 0;
}