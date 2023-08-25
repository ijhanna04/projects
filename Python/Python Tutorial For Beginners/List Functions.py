lucky_numbers = [4, 8, 15, 16, 23, 42]
friends = ["Kevin", "Karen", "Jim", "Oscar", "Toby"]

# friends.extend(lucky_numbers)  # append a list onto the end of an existing list
friends.append("Creed")  # append an individual item onto the end of a list
friends.insert(1, "Kelly")  # insert an item in a specific index position on a list (pushes back other items)

friends.remove("Jim")  # remove a specific item from a list
# friends.clear()  # remove all the items from a list
friends.pop()  # pop an item off the list (remove the last element from the list)

friends.sort()  # sort the list in ascending order (alphabetic or numeric order)
lucky_numbers.reverse()  # reverse a list

friends2 = friends.copy()   # copy a list

print(lucky_numbers)
print(friends)
print(friends.index("Kevin"))  # show the index position of "Kevin" (error if item is not in list)
print(friends.count("Jim"))  # show how many times an item shows up in a list
print(friends2)
