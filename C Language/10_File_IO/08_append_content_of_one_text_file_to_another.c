#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%99s", destinationFile);

    source = fopen(sourceFile, "r");
    destination = fopen(destinationFile, "a");

    if (source == NULL || destination == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("Content appended successfully.\n");

    return 0;
}