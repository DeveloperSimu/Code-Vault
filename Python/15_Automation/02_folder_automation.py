import os

folder_name = "MyFolder"

if not os.path.exists(folder_name):
    os.mkdir(folder_name)
    print("Folder created successfully.")
else:
    print("Folder already exists.")

print("Current folders:")

for item in os.listdir("."):
    if os.path.isdir(item):
        print(item)