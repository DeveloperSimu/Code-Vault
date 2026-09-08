import json

student = {
    "name": "Srimanta",
    "age": 21,
    "course": "B.Sc IT",
    "skills": [
        "Python",
        "C",
        "Java",
        "Web Development"
    ]
}

file_name = "student.json"

with open(file_name, "w") as file:
    json.dump(student, file, indent=4)

print("JSON file written successfully.")