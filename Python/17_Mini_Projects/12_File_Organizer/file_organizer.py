import os
import shutil


source_folder = input("Enter folder path: ")

if not os.path.exists(source_folder):
    print("Folder does not exist.")

else:
    file_categories = {
        "Images": [".jpg", ".jpeg", ".png", ".gif"],
        "Documents": [".pdf", ".doc", ".docx", ".txt"],
        "Videos": [".mp4", ".mkv", ".avi"],
        "Audio": [".mp3", ".wav"],
        "Archives": [".zip", ".rar", ".7z"]
    }

    for file_name in os.listdir(source_folder):

        file_path = os.path.join(source_folder, file_name)

        if not os.path.isfile(file_path):
            continue

        extension = os.path.splitext(file_name)[1].lower()
        destination_folder = "Others"

        for category, extensions in file_categories.items():
            if extension in extensions:
                destination_folder = category
                break

        folder_path = os.path.join(
            source_folder,
            destination_folder
        )

        os.makedirs(folder_path, exist_ok=True)

        destination_path = os.path.join(
            folder_path,
            file_name
        )

        shutil.move(file_path, destination_path)

    print("Files organized successfully.")