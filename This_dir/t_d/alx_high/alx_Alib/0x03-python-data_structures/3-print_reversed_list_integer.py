#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    if my_list:
        lent = len(my_list) - 1
        # loop through list in reverse and print element
        while lent >= 0:
            print("{:d}".format(my_list[lent]))
            lent = lent - 1
