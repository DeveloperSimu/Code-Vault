import re

text = "Python, Java, C, Python, Java"

pattern = r"Python"

matches = re.findall(pattern, text)

print("Matches:", matches)
print("Number of matches:", len(matches))