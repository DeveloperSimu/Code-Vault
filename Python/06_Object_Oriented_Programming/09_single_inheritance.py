class Parent:
    def show_parent(self):
        print("This is the parent class")


class Child(Parent):
    def show_child(self):
        print("This is the child class")


child = Child()

child.show_parent()
child.show_child()