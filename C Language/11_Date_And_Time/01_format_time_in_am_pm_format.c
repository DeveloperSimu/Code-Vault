#include <stdio.h>
#include <time.h>

int main()
{
    time_t currentTime;
    struct tm *timeInfo;

    time(&currentTime);
    timeInfo = localtime(&currentTime);

    int hour = timeInfo->tm_hour;

    if (hour >= 12)
    {
        if (hour > 12)
            hour -= 12;

        printf("Time: %02d:%02d:%02d PM\n",
               hour,
               timeInfo->tm_min,
               timeInfo->tm_sec);
    }
    else
    {
        if (hour == 0)
            hour = 12;

        printf("Time: %02d:%02d:%02d AM\n",
               hour,
               timeInfo->tm_min,
               timeInfo->tm_sec);
    }

    return 0;
}