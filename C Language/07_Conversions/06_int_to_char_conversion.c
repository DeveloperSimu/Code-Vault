#include <stdio.h>

int main()
{
    int num;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    ch = (char)num;

    printf("Character: %c\n", ch);

    return 0;
}