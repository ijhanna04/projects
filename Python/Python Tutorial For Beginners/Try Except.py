try:
    answer = 10 / 0
    number = int(input("Enter a number: "))
    print(number)
except ZeroDivisionError as err:  # except allows a program to handle a specific type of error and inform the user
    print(err)
except ValueError:                # good practice is the except specific errors
    print("Invalid Input")
