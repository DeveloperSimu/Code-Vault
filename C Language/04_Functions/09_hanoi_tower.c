#include <stdio.h>

void hanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    hanoi(n - 1, source, destination, auxiliary);

    printf("Move disk %d from %c to %c\n", n, source, destination);

    hanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number of disks.\n");
    }
    else
    {
        hanoi(n, 'A', 'B', 'C');
    }

    return 0;
}