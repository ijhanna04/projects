for letter in "Giraffe Academy":  # "letter" could be any word as long as it matches what you are trying to print
    print(letter)

friends = ["Jim", "Karen", "Kevin"]
for friend in friends:  # print out elements in the array "friends"
    print(friend)

for index in range(len(friends)):   # print out elements in the range of the array "friends"
    print(friends[index])

for index in range(len(friends)):  # display how many elements are in the array "friends" (3)
    print(index)

for index in range(len(friends)):   # access a specific element in the array ("Jim")
    print(friends[0])

for index in range(10):
    print(index)

for index in range(3, 10):
    print(index)

for index in range(5):
    if index == 0:
        print("first Iteration")
    else:
        print("Not first")