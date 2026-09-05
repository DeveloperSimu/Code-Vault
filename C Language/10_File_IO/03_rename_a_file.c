#include <stdio.h>

int main()
{
    char oldName[100];
    char newName[100];

    printf("Enter old file name: ");
    scanf("%99s", oldName);

    printf("Enter new file name: ");
    scanf("%99s", newName);

    if (rename(oldName, newName) == 0)
    {
        printf("File renamed successfully.\n");
    }
    else
    {
        printf("Unable to rename the file.\n");
    }

    return 0;
}