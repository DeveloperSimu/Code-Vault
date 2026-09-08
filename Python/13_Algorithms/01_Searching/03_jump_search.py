import math

numbers = [10, 20, 30, 40, 50, 60, 70, 80]
target = int(input("Enter element to search: "))

n = len(numbers)
step = int(math.sqrt(n))
prev = 0
found = False

while prev < n and numbers[min(step, n) - 1] < target:
    prev = step
    step += int(math.sqrt(n))

    if prev >= n:
        break

if prev < n:
    while prev < min(step, n):
        if numbers[prev] == target:
            print("Element found at index:", prev)
            found = True
            break

        if numbers[prev] > target:
            break

        prev += 1

if not found:
    print("Element not found.")