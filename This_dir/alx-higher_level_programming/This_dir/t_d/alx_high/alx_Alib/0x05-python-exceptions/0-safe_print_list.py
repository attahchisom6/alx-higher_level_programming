#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    """
    prints x elements of a list
    my_list: contain any type (integer, string, etc.)
    x: represents the number of elements to print
    Return: the real number of elements printed
    """
    try:
        count = 0
        for item in my_list:  # loop through list
            if x is not count:
                print("{}".format(item), end="")
                count += 1
        print()  # newline
    except Exception:
        pass
    return count  # return count
