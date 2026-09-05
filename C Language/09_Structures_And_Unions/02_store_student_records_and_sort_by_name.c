#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student students[100], temp;
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Roll number: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(students[i].name, students[j].name) > 0)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudents sorted by name:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s %d %.2f\n",
               students[i].name,
               students[i].roll,
               students[i].marks);
    }

    return 0;
}