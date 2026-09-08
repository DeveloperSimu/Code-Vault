def merge_sort(numbers):
    if len(numbers) <= 1:
        return numbers

    mid = len(numbers) // 2

    left = merge_sort(numbers[:mid])
    right = merge_sort(numbers[mid:])

    result = []
    i = 0
    j = 0

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1

    result.extend(left[i:])
    result.extend(right[j:])

    return result


numbers = [38, 27, 43, 3, 9, 82, 10]

print("Sorted array:", merge_sort(numbers))