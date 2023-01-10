#!/usr/bin/python3

"""
class definintion
"""


def class_to_json(obj):
    """function to return the dictionary data structures of JASON serialization
    of an object
    """
    return (obj.__dict__)
