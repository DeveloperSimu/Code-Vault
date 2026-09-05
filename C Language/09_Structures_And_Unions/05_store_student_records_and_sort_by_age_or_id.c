#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    int age;
};

int main()
{
    struct Student students[100], temp;
    int n, choice;
    int i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    printf("\nSort by:\n");
    printf("1. Age\n");
    printf("2. ID\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int condition = 0;

            if (choice == 1 && students[i].age > students[j].age)
                condition = 1;

            if (choice == 2 && students[i].id > students[j].id)
                condition = 1;

            if (condition)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nSorted Student Records:\n");

    for (i = 0; i < n; i++)
    {
        printf("ID: %d | Name: %s | Age: %d\n",
               students[i].id,
               students[i].name,
               students[i].age);
    }

    return 0;
}