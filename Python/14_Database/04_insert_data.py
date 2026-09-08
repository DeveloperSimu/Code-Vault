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
INSERT INTO students (name, age, course)
VALUES (?, ?, ?)
""", ("Srimanta", 21, "B.Sc IT"))

connection.commit()

print("Data inserted successfully.")

connection.close()