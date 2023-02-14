#!/usr/bin/python3
def islower(c):
    if ord(c) < 97 or ord(c) > 122:  # check if character is lowercase
        return False  # character is not lowercase
    return True  # character is lowercase
