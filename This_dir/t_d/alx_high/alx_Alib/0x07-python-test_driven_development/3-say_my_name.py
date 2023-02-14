#!/usr/bin/python3
""" This module prints fullname. """


def say_my_name(first_name, last_name=""):
    """ Print firstname and last name. """
    if type(first_name) != str:  # not a string
        raise TypeError('first_name must be a string')
    if type(last_name) != str:  # not a string
        raise TypeError('last_name must be a string')
    print("My name is {} {}".format(first_name, last_name))
