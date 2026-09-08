from collections import Counter, namedtuple, deque

numbers = [1, 2, 2, 3, 3, 3, 4]

counter = Counter(numbers)

print("Counter:", counter)

Student = namedtuple("Student", ["name", "age"])

student = Student("Srimanta", 21)

print("Name:", student.name)
print("Age:", student.age)

queue = deque([10, 20, 30])

queue.append(40)
queue.appendleft(5)

print("Deque:", queue)