#!/usr/bin/python3

"""determing if an instance if from a child class
"""


def inherits_from(obj, a_class):
    """checks to see if an instance is from a subclass
    """
    if type(obj) is not a_class:
        return (isinstance(obj, a_class))
    return (False)
