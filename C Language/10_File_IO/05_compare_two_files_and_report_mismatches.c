#include <stdio.h>

int main()
{
    FILE *file1, *file2;
    char fileName1[100], fileName2[100];
    int ch1, ch2;
    long position = 1;
    int mismatch = 0;

    printf("Enter first file name: ");
    scanf("%99s", fileName1);

    printf("Enter second file name: ");
    scanf("%99s", fileName2);

    file1 = fopen(fileName1, "r");
    file2 = fopen(fileName2, "r");

    if (file1 == NULL || file2 == NULL)
    {
        printf("Unable to open files.\n");
        return 1;
    }

    while (1)
    {
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);

        if (ch1 != ch2)
        {
            mismatch = 1;
            printf("Mismatch found at position %ld.\n", position);
        }

        if (ch1 == EOF || ch2 == EOF)
            break;

        position++;
    }

    if (!mismatch)
        printf("Files are identical.\n");
    else
        printf("Files are different.\n");

    fclose(file1);
    fclose(file2);

    return 0;
}