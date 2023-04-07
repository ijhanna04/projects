friends = ["Kevin", "Karen", "Jim", "Oscar", "Toby"]  # string, numbers, and booleans can be stored in lists

print(friends)  # print out list "friends"
print(friends[0])  # print out "Kevin" - accessed based off index
print(friends[-1])  # print out "Toby" - accessed starting from the back of the list
print(friends[1:])  # access elements at index position 1 and everything after
print(friends[1:3])  # access elements at index position 1 up to but not including 3

friends[1] = "Mike"  # change the elements at index position 1
print(friends[1])
