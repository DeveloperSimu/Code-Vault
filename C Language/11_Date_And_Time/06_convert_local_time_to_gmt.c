#include <stdio.h>
#include <time.h>

int main()
{
    time_t currentTime;
    struct tm *gmtTime;

    time(&currentTime);

    gmtTime = gmtime(&currentTime);

    printf("Current GMT Time:\n");
    printf("%02d:%02d:%02d\n",
           gmtTime->tm_hour,
           gmtTime->tm_min,
           gmtTime->tm_sec);

    return 0;
}