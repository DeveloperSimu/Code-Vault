#include <stdio.h>

struct Distance
{
    int feet;
    int inches;
};

int main()
{
    struct Distance distance;
    int n, i;
    int totalFeet = 0, totalInches = 0;

    printf("Enter number of distances: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter distance %d:\n", i + 1);

        printf("Feet: ");
        scanf("%d", &distance.feet);

        printf("Inches: ");
        scanf("%d", &distance.inches);

        totalFeet += distance.feet;
        totalInches += distance.inches;
    }

    totalFeet += totalInches / 12;
    totalInches %= 12;

    printf("\nTotal Distance = %d feet %d inches\n",
           totalFeet, totalInches);

    return 0;
}