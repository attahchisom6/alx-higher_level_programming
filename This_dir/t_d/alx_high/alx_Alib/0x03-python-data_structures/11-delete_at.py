#!/usr/bin/python3
def delete_at(my_list=[], idx=0):
    # if index is negative
    if idx < 0:
        return my_list
    # if index is out of range
    if idx >= len(my_list):
        return my_list
    # delete the item at index given
    del my_list[idx]
    return my_list
