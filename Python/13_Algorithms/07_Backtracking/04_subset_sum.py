def subset_sum(numbers, target, index=0, current=[]):

    if target == 0:
        print("Subset:", current)
        return True

    if index == len(numbers) or target < 0:
        return False

    include = subset_sum(
        numbers,
        target - numbers[index],
        index + 1,
        current + [numbers[index]]
    )

    exclude = subset_sum(
        numbers,
        target,
        index + 1,
        current
    )

    return include or exclude


numbers = [3, 34, 4, 12, 5, 2]

target = int(input("Enter target sum: "))

if not subset_sum(numbers, target):
    print("No subset found.")