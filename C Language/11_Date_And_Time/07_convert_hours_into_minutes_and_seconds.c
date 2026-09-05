#include <stdio.h>

int main()
{
    float hours;
    int minutes;
    int seconds;

    printf("Enter hours: ");
    scanf("%f", &hours);

    minutes = (int)(hours * 60);
    seconds = (int)(hours * 3600);

    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}