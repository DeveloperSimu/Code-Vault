items = [
    ("Item 1", 60, 10),
    ("Item 2", 100, 20),
    ("Item 3", 120, 30)
]

capacity = 50

items.sort(key=lambda item: item[1] / item[2], reverse=True)

total_value = 0

for name, value, weight in items:
    if capacity >= weight:
        capacity -= weight
        total_value += value

    else:
        fraction = capacity / weight
        total_value += value * fraction
        break

print("Maximum value:", total_value)