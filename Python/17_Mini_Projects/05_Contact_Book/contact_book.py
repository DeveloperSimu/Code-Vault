contacts = {}


while True:
    print("\n===== CONTACT BOOK =====")
    print("1. Add Contact")
    print("2. View Contacts")
    print("3. Search Contact")
    print("4. Delete Contact")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        name = input("Enter name: ")
        phone = input("Enter phone number: ")
        email = input("Enter email: ")

        contacts[name] = {
            "phone": phone,
            "email": email
        }

        print("Contact added successfully.")

    elif choice == "2":
        if not contacts:
            print("No contacts available.")
        else:
            print("\nContacts:")

            for name, details in contacts.items():
                print("Name:", name)
                print("Phone:", details["phone"])
                print("Email:", details["email"])
                print()

    elif choice == "3":
        name = input("Enter name to search: ")

        if name in contacts:
            print("Name:", name)
            print("Phone:", contacts[name]["phone"])
            print("Email:", contacts[name]["email"])
        else:
            print("Contact not found.")

    elif choice == "4":
        name = input("Enter name to delete: ")

        if name in contacts:
            del contacts[name]
            print("Contact deleted successfully.")
        else:
            print("Contact not found.")

    elif choice == "5":
        print("Contact Book closed.")
        break

    else:
        print("Invalid choice.")