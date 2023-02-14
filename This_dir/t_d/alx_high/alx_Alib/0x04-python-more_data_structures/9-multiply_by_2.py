#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    """
    a new dictionary with all values multiplied by 2
    a_dictionary: dictionary to be examined
    Return: a new dictionary
    """
    # dict comprehension to create new dictionary
    new_dict = {key: a_dictionary[key] * 2 for key in a_dictionary}
    return new_dict
