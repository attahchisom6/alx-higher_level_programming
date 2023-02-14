#!/usr/bin/python3
def update_dictionary(a_dictionary, key, value):
    """
    replaces or adds key/value in a dictionary
    a_dictionary: dictionary to be examined
    key: argument will be always a string
    value: argument will be any type
    Return: key/value in dictionary
    """
    if key not in a_dictionary:  # key does not exist
        a_dictionary[key] = value  # create key/value
    for item in a_dictionary:  # iterate through dictionary
        if item == key:  # key exists
            a_dictionary[key] = value  # replace value
    return a_dictionary
