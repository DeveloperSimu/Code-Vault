numbers = [10, 20, 30, 40, 50, 60, 70, 80]
target = int(input("Enter element to search: "))

low = 0
high = len(numbers) - 1
found = False

while low <= high and numbers[low] <= target <= numbers[high]:

    if numbers[low] == numbers[high]:
        if numbers[low] == target:
            print("Element found at index:", low)
            found = True
        break

    position = low + (
        (target - numbers[low]) * (high - low)
        // (numbers[high] - numbers[low])
    )

    if numbers[position] == target:
        print("Element found at index:", position)
        found = True
        break

    elif numbers[position] < target:
        low = position + 1

    else:
        high = position - 1

if not found:
    print("Element not found.")