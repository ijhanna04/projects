# open("employees.txt", "r")  # open and read the information inside the file "employees.txt"
# open("employees.txt", "w")  # open and write new information or change information within the file "employees.txt"
# open("employees.txt", "a")  # open and append information onto the end of the file "employees.txt"
# open("employees.txt", "r+")  # open and use functions of read and write in the file "employees.txt"

employee_file = open("employees.txt", "r")

print(employee_file.readable())  # check if a file is readable - possible in "r" or "r+" mode

# print(employee_file.read())  # read the file
# print(employee_file.readline())  # read an individual line inside the file the move cursor to next line
# print(employee_file.readline()) # reads the subsequent line when following print(employee_file.readline())

for employee in employee_file.readlines():  # loop through employees in array "employee_file.readlines()
        print(employee) # another way to print out the lines in the file

# print(employee_file.readlines())    # read lines in the file as a list
# print(employee_file.readlines()[1]) # read a specific line in the index 1 on the list
employee_file.close()  # close a file once you are done with it
