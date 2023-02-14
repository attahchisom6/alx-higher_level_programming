#!/usr/bin/python3
def uniq_add(my_list=[]):
    """
    adds all unique integers in a list (only once for each integer)
    my_list: is the list to be examined
    Return: sum of integers
    """
    sum = 0
    unique = set(my_list)  # convert list to set
    for num in unique:  # iterate through set
        sum += num  # get sum
    return sum
