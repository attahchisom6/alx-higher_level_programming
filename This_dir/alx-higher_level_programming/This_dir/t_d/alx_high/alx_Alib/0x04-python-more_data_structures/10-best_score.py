#!/usr/bin/python3
def best_score(a_dictionary):
    """
    key with the biggest integer value
    a_dictionary: dictionary to be examined
    Return: returns a key with the biggest integer value
    """
    if not a_dictionary:
        return None
    else:
        # loop through dictionary
        for key, values in a_dictionary.items():
            # if integer is the highest
            if values == max(a_dictionary.values()):
                return key
