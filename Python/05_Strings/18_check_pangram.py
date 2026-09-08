text = input("Enter a string: ").lower()

alphabet = set("abcdefghijklmnopqrstuvwxyz")

if alphabet.issubset(set(text)):
    print("Pangram")
else:
    print("Not a pangram")