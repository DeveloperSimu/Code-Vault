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
DELETE FROM students
WHERE id = ?
""", (1,))

connection.commit()

print("Data deleted successfully.")

connection.close()