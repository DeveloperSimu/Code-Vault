try:
    number = int(input("Enter a number: "))
    print("You entered:", number)

except ValueError:
    print("Invalid input.")

else:
    print("No exception occurred.")