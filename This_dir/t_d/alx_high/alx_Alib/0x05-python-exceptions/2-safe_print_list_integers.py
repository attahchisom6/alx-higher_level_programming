#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    """
    prints the first x elements of a list and only integers
    my_list: can contain any type (integer, string, etc.)
    x: represents the number of elements to access in my_list
    Return: the real number of integers printed
    """
    count = 0
    for i in range(x):  # loop through list
        try:
            print("{:d}".format(my_list[i]), end="")
            count += 1
        except (TypeError, ValueError):
            continue  # ignore type or value error
    print()  # newline
    return count  # return count
