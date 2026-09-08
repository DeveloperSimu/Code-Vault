class Parent:
    def show(self):
        print("Parent method")


class Child(Parent):
    def show(self):
        print("Child method")


parent = Parent()
child = Child()

parent.show()
child.show()