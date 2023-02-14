#!/usr/bin/python3

"""to check if an object is an instance of a class"""


def is_same_class(obj, a_class):
    """seek to check if an instance is part of the same class

    Args:
        @obj:class instance
        a_class: the test class
        """
    if type(obj) is a_class:
        return (True)
    return (False)
