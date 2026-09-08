import re

text = "Python,Java;C++:JavaScript"

pattern = r"[,;:]"

result = re.split(pattern, text)

print(result)