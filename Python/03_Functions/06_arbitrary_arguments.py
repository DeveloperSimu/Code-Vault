def total(*numbers):
    result = 0

    for number in numbers:
        result += number

    print("Total:", result)


total(10, 20, 30, 40)