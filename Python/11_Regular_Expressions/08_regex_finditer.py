import re

text = "Python Java Python C Python"

pattern = r"Python"

matches = re.finditer(pattern, text)

for match in matches:
    print("Found:", match.group())
    print("Start position:", match.start())
    print("End position:", match.end())