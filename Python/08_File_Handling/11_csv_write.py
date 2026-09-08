import csv

students = [
    ["Name", "Age", "Course"],
    ["Srimanta", 21, "BSc IT"],
    ["Rahul", 22, "BCA"],
    ["Amit", 20, "BSc CS"]
]

with open("students.csv", "w", newline="") as file:
    writer = csv.writer(file)

    writer.writerows(students)

print("CSV file written successfully.")