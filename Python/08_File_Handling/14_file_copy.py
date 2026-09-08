source_file = "example.txt"
destination_file = "copy_example.txt"

with open(source_file, "r") as source:
    content = source.read()

with open(destination_file, "w") as destination:
    destination.write(content)

print("File copied successfully.")