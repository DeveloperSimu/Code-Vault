import random

number = random.randint(1, 100)
attempts = 0

print("===== NUMBER GUESSING GAME =====")
print("Guess a number between 1 and 100.")

while True:
    try:
        guess = int(input("Enter your guess: "))
        attempts += 1

        if guess < number:
            print("Too low!")

        elif guess > number:
            print("Too high!")

        else:
            print("\nCongratulations!")
            print("You guessed the number:", number)
            print("Attempts:", attempts)
            break

    except ValueError:
        print("Please enter a valid number.")