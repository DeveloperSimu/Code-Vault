class Father:
    def father_property(self):
        print("Father's property")


class Mother:
    def mother_property(self):
        print("Mother's property")


class Child(Father, Mother):
    def child_property(self):
        print("Child's property")


child = Child()

child.father_property()
child.mother_property()
child.child_property()