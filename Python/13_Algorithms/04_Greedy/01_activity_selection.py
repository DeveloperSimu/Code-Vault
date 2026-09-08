activities = [
    ("A1", 1, 2),
    ("A2", 3, 4),
    ("A3", 0, 6),
    ("A4", 5, 7),
    ("A5", 8, 9),
    ("A6", 5, 9)
]

activities.sort(key=lambda activity: activity[2])

selected = []
last_finish = 0

for activity in activities:
    name, start, finish = activity

    if start >= last_finish:
        selected.append(activity)
        last_finish = finish

print("Selected activities:")

for activity in selected:
    print(activity)