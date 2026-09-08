import sqlite3

connection = sqlite3.connect("students.db")
cursor = connection.cursor()

cursor.execute("""
CREATE TABLE IF NOT EXISTS students (
    id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    age INTEGER,
    course TEXT
)
""")

name = "Amit"
age = 22
course = "B.Sc IT"

# Parameterized INSERT
cursor.execute("""
INSERT INTO students (name, age, course)
VALUES (?, ?, ?)
""", (name, age, course))

connection.commit()

# Parameterized SELECT
search_name = "Amit"

cursor.execute("""
SELECT * FROM students
WHERE name = ?
""", (search_name,))

students = cursor.fetchall()

print("Search Results:\n")

for student in students:
    print("ID:", student[0])
    print("Name:", student[1])
    print("Age:", student[2])
    print("Course:", student[3])

connection.close()