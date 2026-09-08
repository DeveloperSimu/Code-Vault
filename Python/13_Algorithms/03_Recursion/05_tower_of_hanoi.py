def tower_of_hanoi(n, source, auxiliary, destination):
    if n == 1:
        print("Move disk 1 from", source, "to", destination)
        return

    tower_of_hanoi(n - 1, source, destination, auxiliary)

    print("Move disk", n, "from", source, "to", destination)

    tower_of_hanoi(n - 1, auxiliary, source, destination)


number = int(input("Enter number of disks: "))

if number <= 0:
    print("Please enter a positive number.")
else:
    tower_of_hanoi(number, "A", "B", "C")