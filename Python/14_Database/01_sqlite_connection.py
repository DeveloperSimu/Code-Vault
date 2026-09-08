import sqlite3

connection = sqlite3.connect("students.db")

print("Database connected successfully.")

connection.close()