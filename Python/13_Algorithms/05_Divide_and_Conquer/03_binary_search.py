def binary_search(numbers, target):
    low = 0
    high = len(numbers) - 1

    while low <= high:
        mid = (low + high) // 2

        if numbers[mid] == target:
            return mid

        elif numbers[mid] < target:
            low = mid + 1

        else:
            high = mid - 1

    return -1


numbers = [10, 20, 30, 40, 50, 60, 70]

target = int(input("Enter element to search: "))

result = binary_search(numbers, target)

if result != -1:
    print("Element found at index:", result)
else:
    print("Element not found.")