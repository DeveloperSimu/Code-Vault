import re

text = "My phone number is 9876543210."

pattern = r"\d+"

result = re.search(pattern, text)

if result:
    print("Number found:", result.group())
else:
    print("Number not found.")