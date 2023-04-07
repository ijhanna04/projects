
# print(2**3) - 2 to the power of 3
def raise_to_power(base_num, pow_num):
    result = 1  # store the result of doing the math
    for index in range(pow_num):    # loop through the range of numbers from 0 up to but not including the power number
        result = result * base_num
    return result


print(raise_to_power(2, 3))