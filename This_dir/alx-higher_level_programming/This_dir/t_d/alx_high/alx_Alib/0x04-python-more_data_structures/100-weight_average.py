#!/usr/bin/python3
def weight_average(my_list=[]):
    """
    weighted average of all integers tuple
    my_list: list to be examined
    Return: returns a float type
    """
    if my_list:  # list exists
        total = 0
        avg = 0
        for item in my_list:  # iterate through list
            score, weight = item  # unpack tuple
            total += score * weight
            avg += weight
        return total / avg
    else:  # list does not exist
        return 0
