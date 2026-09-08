import string
import random


print("===== PASSWORD GENERATOR =====")

try:
    length = int(input("Enter password length: "))

    if length <= 0:
        print("Password length must be greater than zero.")

    else:
        characters = (
            string.ascii_letters
            + string.digits
            + string.punctuation
        )

        password = ""

        for _ in range(length):
            password += random.choice(characters)

        print("\nGenerated Password:")
        print(password)

except ValueError:
    print("Please enter a valid number.")