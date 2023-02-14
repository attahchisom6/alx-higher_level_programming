#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    """
    prints a dictionary by ordered keys
    a_dictionary: dictionary to be examined
    Return: prints dictionary
    """
    new = list(a_dictionary)  # convert to a list
    sort = sorted(new)  # sort the keys
    for item in sort:  # iterate through keys
        print("{}: {}".format(item, a_dictionary[item]))
