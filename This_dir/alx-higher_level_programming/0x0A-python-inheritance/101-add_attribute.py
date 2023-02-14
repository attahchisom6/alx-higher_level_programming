#!/usr/bin/python3

"""function to add an attribute"""


def add_attribute(obj, name, value):
    """function to add attribute to a class

    Args:
        obj: object to be added
        name: name of class
        value: object value
    """
    if not hasattr(obj, "__dict__"):
        raise TypeError("can't add new attribute")
    setattr(obj, name, value)
