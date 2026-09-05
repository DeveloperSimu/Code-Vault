#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: %d %d\n", a, b);

    swap(&a, &b);

    printf("After swapping: %d %d\n", a, b);

    return 0;
}