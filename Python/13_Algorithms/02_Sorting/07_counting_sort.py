numbers = [4, 2, 2, 8, 3, 3, 1]

maximum = max(numbers)

count = [0] * (maximum + 1)

for number in numbers:
    count[number] += 1

sorted_numbers = []

for number in range(len(count)):
    for _ in range(count[number]):
        sorted_numbers.append(number)

print("Sorted array:", sorted_numbers)