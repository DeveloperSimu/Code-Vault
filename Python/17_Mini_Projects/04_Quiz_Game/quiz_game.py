questions = [
    {
        "question": "What is the extension of a Python file?",
        "options": ["A. .java", "B. .py", "C. .c", "D. .html"],
        "answer": "B"
    },
    {
        "question": "Which keyword is used to define a function in Python?",
        "options": ["A. function", "B. define", "C. def", "D. fun"],
        "answer": "C"
    },
    {
        "question": "Which data type stores True or False?",
        "options": ["A. int", "B. str", "C. float", "D. bool"],
        "answer": "D"
    },
    {
        "question": "Which symbol is used for comments in Python?",
        "options": ["A. //", "B. #", "C. /*", "D. --"],
        "answer": "B"
    },
    {
        "question": "Which function is used to display output?",
        "options": ["A. display()", "B. output()", "C. print()", "D. show()"],
        "answer": "C"
    }
]

score = 0

print("===== PYTHON QUIZ GAME =====")

for question in questions:
    print("\n" + question["question"])

    for option in question["options"]:
        print(option)

    answer = input("Enter your answer: ").upper()

    if answer == question["answer"]:
        print("Correct!")
        score += 1
    else:
        print("Wrong!")

print("\n===== RESULT =====")
print("Score:", score, "/", len(questions))

if score == len(questions):
    print("Excellent!")

elif score >= 3:
    print("Good job!")

else:
    print("Keep practicing!")