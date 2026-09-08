def power(base, exponent):
    if exponent == 0:
        return 1

    return base * power(base, exponent - 1)


base = int(input("Enter base: "))
exponent = int(input("Enter exponent: "))

if exponent < 0:
    print("Please enter a non-negative exponent.")
else:
    print("Result:", power(base, exponent))