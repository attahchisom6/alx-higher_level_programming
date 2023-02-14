#!/usr/bin/python3
def no_c(my_string):
    new = ""  # copy to store string
    for i in range(0, len(my_string)):
        # character at position to be removed
        if my_string[i] == 'c' or my_string[i] == 'C':
            continue  # go to next index
        new += my_string[i]  # append characters
    return new  # return string copy
