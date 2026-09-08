def factorial(n):
    if n == 0 or n == 1:
        return 1

    return n * factorial(n - 1)


number = int(input("Enter a number: "))

if number < 0:
    print("Factorial is not defined for negative numbers.")
else:
    print("Factorial:", factorial(number))