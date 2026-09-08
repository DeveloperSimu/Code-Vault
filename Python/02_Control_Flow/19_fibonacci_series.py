terms = int(input("Enter number of terms: "))

first = 0
second = 1

for i in range(terms):
    print(first, end=" ")

    next_term = first + second
    first = second
    second = next_term

print()