number_grid = [  # 2D list holds lists inside it
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
    [0]
]

print(number_grid[0][0])  # access elements in a 2D list

for row in number_grid:
    for col in row:
        print(col)  # print out all the elements in the arrays in the 2D list
