import re

text = "Python 123 Java 456 C 789"

pattern = r"[0-9]+"

matches = re.findall(pattern, text)

print("Numbers:", matches)