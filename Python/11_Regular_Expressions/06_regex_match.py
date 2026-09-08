import re

text = "Python is easy to learn."

pattern = r"Python"

result = re.match(pattern, text)

if result:
    print("Match found:", result.group())
else:
    print("No match found.")