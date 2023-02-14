#!/usr/bin/python3
def only_diff_elements(set_1, set_2):
    """
    returns a set of all elements present in only one set
    set_1: first set
    set_2: second set
    Return: a set of all elements present in only one set
    """
    new = set_1 ^ set_2  # items in set_1 or set_2 but not both
    return new
