import os

file_name = "example.txt"

with open(file_name, "w") as file:
    file.write("This file was created using Python automation.")

print("File created successfully.")

if os.path.exists(file_name):
    print("File exists.")