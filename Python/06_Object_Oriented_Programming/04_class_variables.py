class Student:
    college = "Global Institute Of Science & Technology"

    def __init__(self, name):
        self.name = name


student1 = Student("Srimanta")
student2 = Student("Rahul")

print(student1.name, "-", student1.college)
print(student2.name, "-", student2.college)