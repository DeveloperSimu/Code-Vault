#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student student, readStudent;
    FILE *file;

    printf("Enter student name: ");
    scanf("%49s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    file = fopen("student.dat", "wb");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fwrite(&student, sizeof(struct Student), 1, file);
    fclose(file);

    file = fopen("student.dat", "rb");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fread(&readStudent, sizeof(struct Student), 1, file);
    fclose(file);

    printf("\nData read from file:\n");
    printf("Name: %s\n", readStudent.name);
    printf("Roll Number: %d\n", readStudent.roll);
    printf("Marks: %.2f\n", readStudent.marks);

    return 0;
}