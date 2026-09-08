import json

file_name = "student.json"

try:
    with open(file_name, "r") as file:
        data = json.load(file)

    print("JSON Data:\n")

    print("Name:", data["name"])
    print("Age:", data["age"])
    print("Course:", data["course"])

except FileNotFoundError:
    print("JSON file not found.")

except json.JSONDecodeError:
    print("Invalid JSON format.")