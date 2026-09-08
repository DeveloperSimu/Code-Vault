import sqlite3

connection = sqlite3.connect("school.db")

print("Database created successfully.")

connection.close()