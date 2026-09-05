#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char filename[100];
    char pattern[100];
    char line[500];

    printf("Enter file name: ");
    scanf("%99s", filename);

    printf("Enter pattern to search: ");
    scanf("%99s", pattern);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("\nMatching lines:\n");

    while (fgets(line, sizeof(line), file) != NULL)
    {
        if (strstr(line, pattern) != NULL)
        {
            printf("%s", line);
        }
    }

    fclose(file);

    return 0;
}