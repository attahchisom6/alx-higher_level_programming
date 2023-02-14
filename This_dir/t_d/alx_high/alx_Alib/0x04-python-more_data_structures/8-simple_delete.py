#!/usr/bin/python3
def simple_delete(a_dictionary, key=""):
    """
    deletes a key in a dictionary
    a_dictionary: dictionary to be examined
    key: argument will be always a string
    Return: dictionary
    """
    if key not in a_dictionary:  # key does not exist
        return a_dictionary  # return dictionary
    else:  # key exists
        del a_dictionary[key]  # delete key
    return a_dictionary
