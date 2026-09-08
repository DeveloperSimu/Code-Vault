tasks = []


while True:
    print("\n===== TO-DO APP =====")
    print("1. Add Task")
    print("2. View Tasks")
    print("3. Remove Task")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        task = input("Enter task: ")
        tasks.append(task)
        print("Task added successfully.")

    elif choice == "2":
        if not tasks:
            print("No tasks available.")
        else:
            print("\nTasks:")

            for index, task in enumerate(tasks, start=1):
                print(f"{index}. {task}")

    elif choice == "3":
        if not tasks:
            print("No tasks available.")
        else:
            for index, task in enumerate(tasks, start=1):
                print(f"{index}. {task}")

            try:
                task_number = int(input("Enter task number to remove: "))

                if 1 <= task_number <= len(tasks):
                    removed_task = tasks.pop(task_number - 1)
                    print("Removed:", removed_task)
                else:
                    print("Invalid task number.")

            except ValueError:
                print("Please enter a valid number.")

    elif choice == "4":
        print("To-Do App closed.")
        break

    else:
        print("Invalid choice.")