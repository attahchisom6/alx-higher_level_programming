#!/usr/bin/python3

def multiply_by_2(a_dictionary):
    new_dict = []
    key_dict = a_dictionary.keys()

    new_dict = {keys: 2 * a_dictionary.get(keys) for keys in key_dict}
    return (new_dict)
