numbers = [10, 20, 30, 40, 50, 60, 70]
target = int(input("Enter element to search: "))

low = 0
high = len(numbers) - 1
found = False

while low <= high:
    mid = (low + high) // 2

    if numbers[mid] == target:
        print("Element found at index:", mid)
        found = True
        break

    elif numbers[mid] < target:
        low = mid + 1

    else:
        high = mid - 1

if not found:
    print("Element not found.")