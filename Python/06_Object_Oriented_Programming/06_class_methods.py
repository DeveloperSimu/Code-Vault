class Student:
    college = "Global Institute Of Science & Technology"

    def __init__(self, name):
        self.name = name

    @classmethod
    def change_college(cls, new_college):
        cls.college = new_college


student = Student("Srimanta")

print("Before:", student.college)

Student.change_college("ABC College")

print("After:", student.college)