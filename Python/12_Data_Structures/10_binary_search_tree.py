class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def insert(root, data):
    if root is None:
        return Node(data)

    if data < root.data:
        root.left = insert(root.left, data)
    else:
        root.right = insert(root.right, data)

    return root


def search(root, data):
    if root is None or root.data == data:
        return root

    if data < root.data:
        return search(root.left, data)

    return search(root.right, data)


def inorder(root):
    if root:
        inorder(root.left)
        print(root.data, end=" ")
        inorder(root.right)


root = None

numbers = [50, 30, 70, 20, 40, 60, 80]

for number in numbers:
    root = insert(root, number)

print("BST Inorder:")
inorder(root)

print()

value = 60

if search(root, value):
    print(value, "found in BST.")
else:
    print(value, "not found in BST.")