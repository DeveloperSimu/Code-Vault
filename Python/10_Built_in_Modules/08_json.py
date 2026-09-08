import json

student = {
    "name": "Srimanta",
    "age": 21,
    "course": "BSc IT"
}

json_data = json.dumps(student, indent=4)

print("JSON data:")
print(json_data)

python_data = json.loads(json_data)

print("Name:", python_data["name"])
print("Age:", python_data["age"])
print("Course:", python_data["course"])