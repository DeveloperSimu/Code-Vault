accounts = {}


def create_account():
    account_number = input("Enter account number: ")

    if account_number in accounts:
        print("Account already exists.")
        return

    name = input("Enter account holder name: ")

    try:
        balance = float(input("Enter initial deposit: "))

        if balance < 0:
            print("Initial deposit cannot be negative.")
            return

        accounts[account_number] = {
            "name": name,
            "balance": balance
        }

        print("Account created successfully.")

    except ValueError:
        print("Please enter a valid amount.")


def deposit():
    account_number = input("Enter account number: ")

    if account_number not in accounts:
        print("Account not found.")
        return

    try:
        amount = float(input("Enter deposit amount: "))

        if amount <= 0:
            print("Amount must be greater than zero.")
            return

        accounts[account_number]["balance"] += amount

        print("Deposit successful.")

    except ValueError:
        print("Please enter a valid amount.")


def withdraw():
    account_number = input("Enter account number: ")

    if account_number not in accounts:
        print("Account not found.")
        return

    try:
        amount = float(input("Enter withdrawal amount: "))

        if amount <= 0:
            print("Amount must be greater than zero.")
            return

        if amount > accounts[account_number]["balance"]:
            print("Insufficient balance.")
            return

        accounts[account_number]["balance"] -= amount

        print("Withdrawal successful.")

    except ValueError:
        print("Please enter a valid amount.")


def check_balance():
    account_number = input("Enter account number: ")

    if account_number not in accounts:
        print("Account not found.")
        return

    account = accounts[account_number]

    print("Account Holder:", account["name"])
    print(f"Balance: ₹{account['balance']:.2f}")


while True:
    print("\n===== BANK MANAGEMENT SYSTEM =====")
    print("1. Create Account")
    print("2. Deposit")
    print("3. Withdraw")
    print("4. Check Balance")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        create_account()

    elif choice == "2":
        deposit()

    elif choice == "3":
        withdraw()

    elif choice == "4":
        check_balance()

    elif choice == "5":
        print("Bank system closed.")
        break

    else:
        print("Invalid choice.")