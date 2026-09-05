#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
    while (1)
    {
        time_t currentTime;
        struct tm *timeInfo;

        time(&currentTime);
        timeInfo = localtime(&currentTime);

        system("cls");

        printf("\n");
        printf("       DIGITAL CLOCK\n");
        printf("       %02d:%02d:%02d\n",
               timeInfo->tm_hour,
               timeInfo->tm_min,
               timeInfo->tm_sec);

        Sleep(1000);
    }

    return 0;
}