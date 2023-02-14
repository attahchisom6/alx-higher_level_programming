#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    """
    deletes keys with a specific value in a dictionary
    a_dictionary: dictionary to be examined
    value: argument will be any type
    Return: dictionary
    """
    values = a_dictionary.values()  # get the values in the dictionary
    if value not in values:  # value does not exist
        return a_dictionary  # return dictionary
    else:  # value exists
        # iterate through dictionary
        for key, val in list(a_dictionary.items()):
            if val == value:
                del a_dictionary[key]  # delete key
        return a_dictionary
