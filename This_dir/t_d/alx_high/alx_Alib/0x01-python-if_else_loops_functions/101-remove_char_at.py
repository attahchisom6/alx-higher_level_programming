#!/usr/bin/python3
def remove_char_at(str, n):
    t = ""  # copy to store string
    for i in range(0, len(str)):
        if i == n:  # character at position to be removed
            continue  # go to next index
        t += str[i]  # append characters
    return t  # return string copy
