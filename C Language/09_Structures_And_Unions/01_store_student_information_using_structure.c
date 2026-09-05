#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student student;

    printf("Enter student name: ");
    scanf("%49s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}