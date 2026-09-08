student = {
    "name": "Srimanta",
    "age": 21,
    "course": "B.Sc IT"
}

print("Keys:", student.keys())
print("Values:", student.values())
print("Items:", student.items())

print("Name:", student.get("name"))

student.update({"age": 22})

print("Updated dictionary:", student)