class Student:  # template - defines what the Student data type is

    def __init__(self, name, major, gpa, is_on_probation):  # self refers to the actual object
        self.name = name    # name of the Student object will be the same as the name that is passed in
        self.major = major
        self.gpa = gpa
        self.is_on_probation = is_on_probation