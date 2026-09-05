#include <stdio.h>

int main()
{
    char filename[100];

    printf("Enter file name: ");
    scanf("%99s", filename);

    if (remove(filename) == 0)
    {
        printf("File removed successfully.\n");
    }
    else
    {
        printf("Unable to remove file.\n");
    }

    return 0;
}