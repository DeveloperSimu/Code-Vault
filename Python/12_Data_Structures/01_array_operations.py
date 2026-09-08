numbers = [10, 20, 30, 40, 50]

print("Original array:", numbers)

numbers.append(60)
print("After adding:", numbers)

numbers.remove(20)
print("After removing:", numbers)

numbers[0] = 100
print("After updating:", numbers)

print("Array length:", len(numbers))