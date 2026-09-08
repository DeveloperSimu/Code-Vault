from PyPDF2 import PdfReader

file_name = "sample.pdf"

try:
    reader = PdfReader(file_name)

    print("Number of pages:", len(reader.pages))

    for page_number, page in enumerate(reader.pages, start=1):
        text = page.extract_text()

        print("\nPage", page_number)
        print(text)

except FileNotFoundError:
    print("PDF file not found.")

except Exception as error:
    print("Error:", error)