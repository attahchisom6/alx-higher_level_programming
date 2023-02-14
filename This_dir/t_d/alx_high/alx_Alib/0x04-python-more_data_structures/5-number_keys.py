#!/usr/bin/python3
def number_keys(a_dictionary):
    """
    returns the number of keys in a dictionary
    a_dictionary: dictionary to be examined
    Return: the number of keys in a dictionary
    """
    count = 0
    for key in a_dictionary:  # loop through dictionary
        count += 1  # increase count
    return count
