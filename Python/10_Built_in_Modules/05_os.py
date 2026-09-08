import os

print("Current directory:", os.getcwd())

print("Files and folders:")

for item in os.listdir():
    print(item)