#!/usr/bin/python3

"""This class prevents users from dynamical creating class attributes except
first name
"""


class LockedClass:
    """A class retricted to only one attribute
    """
    __slots__ = ["first_name"]
