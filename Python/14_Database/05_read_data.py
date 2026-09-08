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

cursor.execute("SELECT * FROM students")

students = cursor.fetchall()

print("Student Records:\n")

for student in students:
    print("ID:", student[0])
    print("Name:", student[1])
    print("Age:", student[2])
    print("Course:", student[3])
    print()

connection.close()