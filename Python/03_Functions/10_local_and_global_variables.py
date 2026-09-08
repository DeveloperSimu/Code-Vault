name = "Global Variable"


def show_name():
    name = "Local Variable"
    print("Inside function:", name)


show_name()

print("Outside function:", name)