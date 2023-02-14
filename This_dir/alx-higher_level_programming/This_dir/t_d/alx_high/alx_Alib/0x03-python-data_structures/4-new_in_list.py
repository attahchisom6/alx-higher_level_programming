#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    # if index is negative
    if idx < 0:
        return my_list
    # if index is out of range
    if idx >= len(my_list):
        return my_list
    # replace indexed element and return
    new_list = my_list[:]  # returns a shallow copy of the list
    new_list[idx] = element
    return new_list
