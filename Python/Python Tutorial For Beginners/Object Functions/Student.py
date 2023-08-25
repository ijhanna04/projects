class Student:  # template - defines what the Student data type is

    def __init__(self, name, major, gpa):  # self refers to the actual object
        self.name = name    # name of the Student object will be the same as the name that is passed in
        self.major = major
        self.gpa = gpa

    def on_honor_roll(self):
        if self.gpa >= 3.5:
            return True
        else:
            return False