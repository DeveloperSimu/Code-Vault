class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class SinglyLinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        new_node = Node(data)

        if self.head is None:
            self.head = new_node
            return

        current = self.head

        while current.next:
            current = current.next

        current.next = new_node

    def display(self):
        current = self.head

        while current:
            print(current.data, end=" -> ")
            current = current.next

        print("None")


linked_list = SinglyLinkedList()

linked_list.insert(10)
linked_list.insert(20)
linked_list.insert(30)

linked_list.display()