# Main Package
class MainPackage:
    def main_message(self):
        print("Hello from main package!")


# Subpackage
class SubPackage(MainPackage):
    def subpackage_message(self):
        print("Hello from subpackage!")


# Message Module
class Message(SubPackage):
    def show_message(self):
        print("Hello from message module!")


# Using the subpackage
message = Message()

message.main_message()
message.subpackage_message()
message.show_message()