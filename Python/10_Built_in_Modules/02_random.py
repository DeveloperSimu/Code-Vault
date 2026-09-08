import random

print("Random number:", random.randint(1, 100))

numbers = [10, 20, 30, 40, 50]

print("Random choice:", random.choice(numbers))

random.shuffle(numbers)

print("Shuffled list:", numbers)