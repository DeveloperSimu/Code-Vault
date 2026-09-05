#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, compoundInterest, amount;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time in years: ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);

    compoundInterest = amount - principal;

    printf("Compound Interest = %.2f", compoundInterest);
    printf("\nAmount = %.2f", amount);

    return 0;
}