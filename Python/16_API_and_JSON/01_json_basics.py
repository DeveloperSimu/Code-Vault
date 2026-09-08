import json

student = {
    "name": "Srimanta",
    "age": 21,
    "course": "B.Sc IT"
}

json_data = json.dumps(student)

print("Python Dictionary:")
print(student)

print("\nJSON Data:")
print(json_data)