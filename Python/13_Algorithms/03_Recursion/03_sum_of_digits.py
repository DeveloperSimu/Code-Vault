def sum_of_digits(number):
    if number == 0:
        return 0

    return number % 10 + sum_of_digits(number // 10)


number = int(input("Enter a number: "))

number = abs(number)

print("Sum of digits:", sum_of_digits(number))