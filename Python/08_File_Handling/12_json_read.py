import json

with open("student.json", "r") as file:
    data = json.load(file)

print("Name:", data["name"])
print("Age:", data["age"])
print("Course:", data["course"])