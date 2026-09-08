first = input("Enter first string: ")
second = input("Enter second string: ")

first = first.replace(" ", "").lower()
second = second.replace(" ", "").lower()

if sorted(first) == sorted(second):
    print("Anagram")
else:
    print("Not an anagram")