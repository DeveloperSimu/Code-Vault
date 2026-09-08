import itertools

numbers = [1, 2, 3]

print("Permutations:")
for item in itertools.permutations(numbers):
    print(item)

print("\nCombinations:")
for item in itertools.combinations(numbers, 2):
    print(item)