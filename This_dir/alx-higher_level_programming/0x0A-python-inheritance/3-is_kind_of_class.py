#!/usr/bin/python3

"""function to check for a class instance"""


def is_kind_of_class(obj, a_class):
    """This fuction checks to see if an object is an instance of a class
    or its derived class
    """
    return (isinstance(obj, a_class))
