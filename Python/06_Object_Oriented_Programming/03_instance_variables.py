class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age


student1 = Student("Srimanta", 21)
student2 = Student("Rahul", 22)

print("Student 1:", student1.name, student1.age)
print("Student 2:", student2.name, student2.age)