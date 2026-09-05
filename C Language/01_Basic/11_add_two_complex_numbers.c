#include <stdio.h>

typedef struct
{
    float real;
    float imaginary;
} Complex;

int main()
{
    Complex num1, num2, sum;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imaginary);

    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imaginary);

    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;

    printf("\nSum = %.2f + %.2fi", sum.real, sum.imaginary);

    return 0;
}