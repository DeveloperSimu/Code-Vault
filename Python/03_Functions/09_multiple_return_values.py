def calculate(a, b):
    addition = a + b
    subtraction = a - b
    multiplication = a * b

    return addition, subtraction, multiplication


add, subtract, multiply = calculate(20, 10)

print("Addition:", add)
print("Subtraction:", subtract)
print("Multiplication:", multiply)