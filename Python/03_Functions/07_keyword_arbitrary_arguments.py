def student_info(**details):
    for key, value in details.items():
        print(key, ":", value)


student_info(name="Srimanta", age=21, course="B.Sc IT")