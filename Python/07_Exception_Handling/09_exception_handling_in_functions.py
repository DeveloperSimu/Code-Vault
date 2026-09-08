def divide_numbers(a, b):
    try:
        result = a / b
        return result

    except ZeroDivisionError:
        print("Cannot divide by zero.")
        return None


number1 = float(input("Enter first number: "))
number2 = float(input("Enter second number: "))

result = divide_numbers(number1, number2)

if result is not None:
    print("Result:", result)