#!/usr/bin/python3

"""function to print a pascal triangle"""


def pascal_triangle(n):
    my_list = []

    if n <= 0:
        return (my_list)
    my_list = [[1]]
    while len(my_list) != n:
        tri = my_list[-1]
        temp = [1]
        for k in range(len(tri) - 1):
            temp.append(tri[k] + tri[k + 1])
        temp.append(1)
        my_list.append(temp)
    return (my_list)
