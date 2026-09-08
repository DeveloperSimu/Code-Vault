numbers = [64, 25, 12, 22, 11]

n = len(numbers)

for i in range(n):
    minimum = i

    for j in range(i + 1, n):
        if numbers[j] < numbers[minimum]:
            minimum = j

    numbers[i], numbers[minimum] = numbers[minimum], numbers[i]

print("Sorted array:", numbers)