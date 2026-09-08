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

cursor.execute("""
UPDATE students
SET age = ?, course = ?
WHERE id = ?
""", (22, "Computer Science", 1))

connection.commit()

print("Data updated successfully.")

connection.close()