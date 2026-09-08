import re

text = "Python Python Python"

pattern = r"Python+"

matches = re.findall(pattern, text)

print("Matches:", matches)