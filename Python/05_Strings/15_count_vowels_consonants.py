text = input("Enter a string: ")

vowels = 0
consonants = 0

for character in text.lower():
    if character.isalpha():
        if character in "aeiou":
            vowels += 1
        else:
            consonants += 1

print("Vowels:", vowels)
print("Consonants:", consonants)