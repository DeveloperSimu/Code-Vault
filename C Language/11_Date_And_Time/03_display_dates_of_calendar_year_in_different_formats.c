#include <stdio.h>
#include <time.h>

int main()
{
    int year;
    struct tm date;
    char buffer[100];

    printf("Enter year: ");
    scanf("%d", &year);

    date.tm_year = year - 1900;
    date.tm_mon = 0;
    date.tm_mday = 1;
    date.tm_hour = 0;
    date.tm_min = 0;
    date.tm_sec = 0;
    date.tm_isdst = -1;

    printf("\nDates of the year %d:\n\n", year);

    for (int month = 0; month < 12; month++)
    {
        date.tm_mon = month;

        for (int day = 1; day <= 31; day++)
        {
            date.tm_mday = day;

            if (mktime(&date) == -1)
                continue;

            if (date.tm_mon != month)
                break;

            strftime(buffer, sizeof(buffer), "%d-%m-%Y", &date);
            printf("%s\n", buffer);
        }
    }

    return 0;
}