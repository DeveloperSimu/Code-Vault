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

# CREATE / INSERT
cursor.execute("""
INSERT INTO students (name, age, course)
VALUES (?, ?, ?)
""", ("Rahul", 20, "BCA"))

# READ
cursor.execute("SELECT * FROM students")

print("Records after INSERT:")

for student in cursor.fetchall():
    print(student)

# UPDATE
cursor.execute("""
UPDATE students
SET age = ?
WHERE name = ?
""", (21, "Rahul"))

# READ after UPDATE
cursor.execute("SELECT * FROM students WHERE name = ?", ("Rahul",))

print("\nRecord after UPDATE:")

for student in cursor.fetchall():
    print(student)

# DELETE
cursor.execute("""
DELETE FROM students
WHERE name = ?
""", ("Rahul",))

connection.commit()

print("\nCRUD operation completed successfully.")

connection.close()