#!/usr/bin/python3
""" This module prints a square. """


def print_square(size):
    """ Prints a square with the character '#'. """
    if type(size) != int:  # not an integer
        raise TypeError('size must be an integer')
    if size < 0:  # size is negative
        raise ValueError('size must be >= 0')
    if type(size) == float and size < 0:
        raise TypeError('size must be an integer')

    for i in range(size):
        print("{}".format('#' * size))
