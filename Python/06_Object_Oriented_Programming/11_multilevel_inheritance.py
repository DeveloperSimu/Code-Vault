class Grandparent:
    def grandparent_method(self):
        print("Grandparent class")


class Parent(Grandparent):
    def parent_method(self):
        print("Parent class")


class Child(Parent):
    def child_method(self):
        print("Child class")


child = Child()

child.grandparent_method()
child.parent_method()
child.child_method()