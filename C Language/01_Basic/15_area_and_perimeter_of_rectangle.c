#include <stdio.h>

int main()
{
    float length, width, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area = %.2f", area);
    printf("\nPerimeter = %.2f", perimeter);

    return 0;
}