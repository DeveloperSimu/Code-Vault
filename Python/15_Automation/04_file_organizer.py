import os
import shutil

source_folder = "Downloads"

if not os.path.exists(source_folder):
    print("Downloads folder does not exist.")
else:
    for file_name in os.listdir(source_folder):
        file_path = os.path.join(source_folder, file_name)

        if os.path.isfile(file_path):
            extension = os.path.splitext(file_name)[1].lower()

            if extension == ".jpg" or extension == ".png" or extension == ".jpeg":
                folder = os.path.join(source_folder, "Images")

            elif extension == ".pdf":
                folder = os.path.join(source_folder, "PDF")

            elif extension == ".txt" or extension == ".docx":
                folder = os.path.join(source_folder, "Documents")

            else:
                folder = os.path.join(source_folder, "Others")

            if not os.path.exists(folder):
                os.mkdir(folder)

            destination = os.path.join(folder, file_name)

            shutil.move(file_path, destination)

    print("Files organized successfully.")