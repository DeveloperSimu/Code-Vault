books = {}


def add_book():
    book_id = input("Enter book ID: ")

    if book_id in books:
        print("Book already exists.")
        return

    title = input("Enter book title: ")
    author = input("Enter author name: ")

    books[book_id] = {
        "title": title,
        "author": author,
        "available": True
    }

    print("Book added successfully.")


def view_books():
    if not books:
        print("No books available.")
        return

    print("\n===== BOOKS =====")

    for book_id, book in books.items():
        status = "Available" if book["available"] else "Issued"

        print("ID:", book_id)
        print("Title:", book["title"])
        print("Author:", book["author"])
        print("Status:", status)
        print()


def issue_book():
    book_id = input("Enter book ID: ")

    if book_id not in books:
        print("Book not found.")
        return

    if not books[book_id]["available"]:
        print("Book is already issued.")
        return

    books[book_id]["available"] = False

    print("Book issued successfully.")


def return_book():
    book_id = input("Enter book ID: ")

    if book_id not in books:
        print("Book not found.")
        return

    if books[book_id]["available"]:
        print("Book is already available.")
        return

    books[book_id]["available"] = True

    print("Book returned successfully.")


while True:
    print("\n===== LIBRARY MANAGEMENT SYSTEM =====")
    print("1. Add Book")
    print("2. View Books")
    print("3. Issue Book")
    print("4. Return Book")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        add_book()

    elif choice == "2":
        view_books()

    elif choice == "3":
        issue_book()

    elif choice == "4":
        return_book()

    elif choice == "5":
        print("Library system closed.")
        break

    else:
        print("Invalid choice.")