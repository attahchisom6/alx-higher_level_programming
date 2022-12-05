#!/usr/bin/python3

divisible_by_2 = __import__("10-divisible_by_2").divisible_by_2

my_list = [0, 1, 2, 3, 4, 5, 6]
new_list = divisible_by_2(my_list)

k = 0
while k < len(new_list):
    print("{:d} {:s} divisible by 2".format(my_list[k], "is" if new_list[k] else "is not"))
    k = k + 1
