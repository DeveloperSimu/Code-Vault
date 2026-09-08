import json

student = {
    "name": "Srimanta",
    "age": 21,
    "course": "B.Sc IT",
    "skills": ["Python", "C", "Java"]
}

# Encode Python object into JSON
json_data = json.dumps(student, indent=4)

print("Encoded JSON:")
print(json_data)

# Decode JSON into Python object
python_data = json.loads(json_data)

print("\nDecoded Python Object:")
print(python_data)

print("\nStudent Name:", python_data["name"])