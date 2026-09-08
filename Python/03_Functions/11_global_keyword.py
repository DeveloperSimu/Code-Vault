count = 10


def change_count():
    global count
    count = 20


print("Before:", count)

change_count()

print("After:", count)