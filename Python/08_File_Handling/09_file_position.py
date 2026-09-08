file = open("example.txt", "r")

print("Current position:", file.tell())

content = file.read(5)

print("Read content:", content)
print("Current position:", file.tell())

file.seek(0)

print("Position after seek:", file.tell())

file.close()