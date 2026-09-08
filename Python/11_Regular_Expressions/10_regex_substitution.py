import re

text = "I like Java. Java is popular."

pattern = r"Java"

result = re.sub(pattern, "Python", text)

print(result)