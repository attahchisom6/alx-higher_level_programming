#!/usr/bin/python3
def common_elements(set_1, set_2):
    """
    returns a set of common elements in two sets
    set_1: first set
    set_2: second set
    Return: a set of common elements in two sets
    """
    new = set_1 & set_2  # items in both set_1 and set_2
    return new
