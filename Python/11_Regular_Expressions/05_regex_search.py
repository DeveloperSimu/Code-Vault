import re

text = "My name is Srimanta."

pattern = r"Srimanta"

result = re.search(pattern, text)

if result:
    print("Found:", result.group())
else:
    print("Not found.")