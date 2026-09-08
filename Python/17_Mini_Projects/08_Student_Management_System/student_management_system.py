students = []


def add_student():
    student_id = input("Enter student ID: ")
    name = input("Enter student name: ")
    age = input("Enter age: ")
    course = input("Enter course: ")

    student = {
        "id": student_id,
        "name": name,
        "age": age,
        "course": course
    }

    students.append(student)

    print("Student added successfully.")


def view_students():
    if not students:
        print("No student records available.")
        return

    print("\n===== STUDENT RECORDS =====")

    for student in students:
        print("ID:", student["id"])
        print("Name:", student["name"])
        print("Age:", student["age"])
        print("Course:", student["course"])
        print()


def search_student():
    student_id = input("Enter student ID: ")

    for student in students:
        if student["id"] == student_id:
            print("\nStudent Found")
            print("ID:", student["id"])
            print("Name:", student["name"])
            print("Age:", student["age"])
            print("Course:", student["course"])
            return

    print("Student not found.")


def delete_student():
    student_id = input("Enter student ID: ")

    for student in students:
        if student["id"] == student_id:
            students.remove(student)
            print("Student deleted successfully.")
            return

    print("Student not found.")


while True:
    print("\n===== STUDENT MANAGEMENT SYSTEM =====")
    print("1. Add Student")
    print("2. View Students")
    print("3. Search Student")
    print("4. Delete Student")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        add_student()

    elif choice == "2":
        view_students()

    elif choice == "3":
        search_student()

    elif choice == "4":
        delete_student()

    elif choice == "5":
        print("System closed.")
        break

    else:
        print("Invalid choice.")