#include <stdio.h>

int main()
{
    float principal, rate, time, simpleInterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f", simpleInterest);

    return 0;
}