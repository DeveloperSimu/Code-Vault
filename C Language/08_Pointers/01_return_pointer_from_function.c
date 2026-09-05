#include <stdio.h>

int* getNumber()
{
    static int num = 100;
    return &num;
}

int main()
{
    int *ptr;

    ptr = getNumber();

    printf("Value: %d\n", *ptr);

    return 0;
}