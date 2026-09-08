class Student:
    def __init__(self, name):
        self._name = name

    @property
    def name(self):
        return self._name

    @name.setter
    def name(self, value):
        self._name = value


student = Student("Srimanta")

print("Name:", student.name)

student.name = "Rahul"

print("Updated Name:", student.name)