#include <stdio.h>
#include <time.h>

int main()
{
    time_t currentTime;
    struct tm *timeInfo;

    time(&currentTime);
    timeInfo = localtime(&currentTime);

    printf("Current Date and Time:\n");
    printf("%02d-%02d-%04d %02d:%02d:%02d\n",
           timeInfo->tm_mday,
           timeInfo->tm_mon + 1,
           timeInfo->tm_year + 1900,
           timeInfo->tm_hour,
           timeInfo->tm_min,
           timeInfo->tm_sec);

    return 0;
}