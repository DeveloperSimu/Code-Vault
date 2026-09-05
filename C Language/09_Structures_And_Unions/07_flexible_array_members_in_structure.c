#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int roll;
    int marks[];
};

int main()
{
    int n, i;
    struct Student *student;

    printf("Enter number of marks: ");
    scanf("%d", &n);

    student = malloc(sizeof(struct Student) + n * sizeof(int));

    if (student == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter roll number: ");
    scanf("%d", &student->roll);

    printf("Enter %d marks:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &student->marks[i]);
    }

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student->roll);

    printf("Marks: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", student->marks[i]);
    }

    printf("\n");

    free(student);

    return 0;
}