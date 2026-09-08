import json

student = {
    "name": "Srimanta",
    "age": 21,
    "course": "BSc IT"
}

with open("student.json", "w") as file:
    json.dump(student, file, indent=4)

print("JSON file written successfully.")