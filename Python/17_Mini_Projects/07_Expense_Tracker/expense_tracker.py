expenses = []


while True:
    print("\n===== EXPENSE TRACKER =====")
    print("1. Add Expense")
    print("2. View Expenses")
    print("3. Total Expense")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        category = input("Enter category: ")

        try:
            amount = float(input("Enter amount: "))

            expenses.append({
                "category": category,
                "amount": amount
            })

            print("Expense added successfully.")

        except ValueError:
            print("Please enter a valid amount.")

    elif choice == "2":
        if not expenses:
            print("No expenses recorded.")
        else:
            print("\nExpenses:")

            for index, expense in enumerate(expenses, start=1):
                print(
                    f"{index}. "
                    f"{expense['category']} - "
                    f"₹{expense['amount']:.2f}"
                )

    elif choice == "3":
        total = sum(expense["amount"] for expense in expenses)

        print(f"Total Expense: ₹{total:.2f}")

    elif choice == "4":
        print("Expense Tracker closed.")
        break

    else:
        print("Invalid choice.")