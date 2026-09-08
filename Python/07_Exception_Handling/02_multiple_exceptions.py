try:
    number1 = int(input("Enter first number: "))
    number2 = int(input("Enter second number: "))

    result = number1 / number2

    print("Result:", result)

except ValueError:
    print("Please enter valid numbers.")

except ZeroDivisionError:
    print("Cannot divide by zero.")