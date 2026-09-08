from pathlib import Path

current_directory = Path.cwd()

print("Current directory:", current_directory)

print("\nFiles and folders:")

for item in current_directory.iterdir():
    print(item)