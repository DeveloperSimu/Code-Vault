import os

filename = "example.txt"

if os.path.exists(filename):
    os.remove(filename)
    print("File deleted successfully.")
else:
    print("File does not exist.")