import re

text = "Python is a programming language."

pattern = "Python"

result = re.search(pattern, text)

if result:
    print("Pattern found.")
else:
    print("Pattern not found.")