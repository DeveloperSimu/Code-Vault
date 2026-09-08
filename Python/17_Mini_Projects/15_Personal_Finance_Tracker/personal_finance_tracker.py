transactions = []


def add_income():
    source = input("Enter income source: ")

    try:
        amount = float(input("Enter income amount: "))

        if amount <= 0:
            print("Amount must be greater than zero.")
            return

        transactions.append({
            "type": "Income",
            "category": source,
            "amount": amount
        })

        print("Income added successfully.")

    except ValueError:
        print("Please enter a valid amount.")


def add_expense():
    category = input("Enter expense category: ")

    try:
        amount = float(input("Enter expense amount: "))

        if amount <= 0:
            print("Amount must be greater than zero.")
            return

        transactions.append({
            "type": "Expense",
            "category": category,
            "amount": amount
        })

        print("Expense added successfully.")

    except ValueError:
        print("Please enter a valid amount.")


def view_transactions():
    if not transactions:
        print("No transactions available.")
        return

    print("\n===== TRANSACTIONS =====")

    for index, transaction in enumerate(
        transactions,
        start=1
    ):
        print(
            f"{index}. "
            f"{transaction['type']} - "
            f"{transaction['category']} - "
            f"₹{transaction['amount']:.2f}"
        )


def show_summary():
    total_income = 0
    total_expense = 0

    for transaction in transactions:
        if transaction["type"] == "Income":
            total_income += transaction["amount"]
        else:
            total_expense += transaction["amount"]

    balance = total_income - total_expense

    print("\n===== FINANCIAL SUMMARY =====")
    print(f"Total Income: ₹{total_income:.2f}")
    print(f"Total Expense: ₹{total_expense:.2f}")
    print(f"Balance: ₹{balance:.2f}")


while True:
    print("\n===== PERSONAL FINANCE TRACKER =====")
    print("1. Add Income")
    print("2. Add Expense")
    print("3. View Transactions")
    print("4. Show Summary")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        add_income()

    elif choice == "2":
        add_expense()

    elif choice == "3":
        view_transactions()

    elif choice == "4":
        show_summary()

    elif choice == "5":
        print("Personal Finance Tracker closed.")
        break

    else:
        print("Invalid choice.")