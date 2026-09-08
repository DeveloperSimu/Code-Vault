import os

old_name = "old_file.txt"
new_name = "new_file.txt"

with open(old_name, "w") as file:
    file.write("This file will be renamed.")

if os.path.exists(old_name):
    os.rename(old_name, new_name)
    print("File renamed successfully.")
else:
    print("File does not exist.")