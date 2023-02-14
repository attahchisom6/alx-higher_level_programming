#!/usr/bin/python3
def element_at(my_list, idx):
    # if index is negative
    if idx < 0:
        return
    # if index is out of range
    if idx >= len(my_list):
        return
    # return the indexed element
    return my_list[idx]
