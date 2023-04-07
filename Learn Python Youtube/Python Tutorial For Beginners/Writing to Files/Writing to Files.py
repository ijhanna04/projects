
# append an item to a new line
"""
employee_file = open("employees.txt", "a")

employee_file.write("\nKelly - Customer Service")   # add text to the end of the file
# use the \n to make sure an item is appended onto a new line and not onto an existing line
employee_file.close()
"""

# write onto a file - overwrites the file and writes in an item in its place
"""
employee_file = open("employees.txt", "w")

employee_file.write("\nKelly - Customer Service")   # add text to the end of the file
# use the \n to make sure an item is appended onto a new line and not onto an existing line
employee_file.close()
"""

# create a new file and write an item on it
employee_file = open("employees1.txt", "w")
# you can use a variety of extensions based on what file type you want to create (.txt .html etc)

employee_file.write("\nKelly - Customer Service")   # add text to the end of the file
# use the \n to make sure an item is appended onto a new line and not onto an existing line
employee_file.close()