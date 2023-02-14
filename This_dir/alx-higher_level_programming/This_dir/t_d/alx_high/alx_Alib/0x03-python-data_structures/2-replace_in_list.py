#!/usr/bin/python3
def replace_in_list(my_list, idx, element):
    # if index is negative
    if idx < 0:
        return my_list
    # if index is out of range
    if idx >= len(my_list):
        return my_list
    # replace indexed element and return
    my_list[idx] = element
    return my_list
