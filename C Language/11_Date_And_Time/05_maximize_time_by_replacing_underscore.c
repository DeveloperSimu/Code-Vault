#include <stdio.h>

int main()
{
    char time[6];

    printf("Enter time in HH:MM format using '_': ");
    scanf("%5s", time);

    if (time[0] == '_')
        time[0] = '2';

    if (time[1] == '_')
    {
        if (time[0] == '2')
            time[1] = '3';
        else
            time[1] = '9';
    }

    if (time[3] == '_')
        time[3] = '5';

    if (time[4] == '_')
        time[4] = '9';

    printf("Maximum possible time: %s\n", time);

    return 0;
}