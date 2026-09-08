numbers_list = [10, 20, 30, 40]

numbers_tuple = tuple(numbers_list)
numbers_set = set(numbers_list)
numbers_dictionary = {
    index + 1: value
    for index, value in enumerate(numbers_list)
}

print("List:", numbers_list)
print("Tuple:", numbers_tuple)
print("Set:", numbers_set)
print("Dictionary:", numbers_dictionary)