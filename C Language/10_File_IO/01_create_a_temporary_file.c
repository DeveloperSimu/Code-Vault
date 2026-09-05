#include <stdio.h>

int main()
{
    FILE *file;

    file = tmpfile();

    if (file == NULL)
    {
        printf("Unable to create temporary file.\n");
        return 1;
    }

    fprintf(file, "This is a temporary file.\n");

    printf("Temporary file created successfully.\n");

    fclose(file);

    return 0;
}