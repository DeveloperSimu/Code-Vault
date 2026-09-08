import re

text = "cat, cot, cut, cit"

pattern = r"c.t"

matches = re.findall(pattern, text)

print("Matches:", matches)