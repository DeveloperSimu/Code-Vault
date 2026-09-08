class Parent:
    def parent_method(self):
        print("Parent class")


class Child1(Parent):
    def child1_method(self):
        print("Child 1 class")


class Child2(Parent):
    def child2_method(self):
        print("Child 2 class")


child1 = Child1()
child2 = Child2()

child1.parent_method()
child1.child1_method()

child2.parent_method()
child2.child2_method()