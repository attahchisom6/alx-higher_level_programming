#!/usr/bin/python3
def search_replace(my_list, search, replace):
    """
    replaces all occurrences of an element by another in a new list
    my_list: is the initial list
    search: is the element to replace in the list
    replace: is the new element
    Return: a new list with element replaced
    """
    new = my_list[:]  # create a copy of my_list
    for i in new:  # iterate through list
        if search in new:  # if element to b raplaced is met
            idx = new.index(search)  # get the index
            new[idx] = replace  # update the value
    return new
