def quick_sort(numbers):
    if len(numbers) <= 1:
        return numbers

    pivot = numbers[-1]

    left = [x for x in numbers[:-1] if x <= pivot]
    right = [x for x in numbers[:-1] if x > pivot]

    return quick_sort(left) + [pivot] + quick_sort(right)


numbers = [10, 7, 8, 9, 1, 5]

print("Sorted array:", quick_sort(numbers))