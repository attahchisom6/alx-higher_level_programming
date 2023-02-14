#!/usr/bin/python3
""" This module creates new instance attribute. """


class LockedClass:
    """
    Prevents the user from dynamically
    creating new instance attributes.
    """
    __slots__ = ("first_name")

    def __init__(self, first_name=""):
        """ Initialize data. """
        self.first_name = first_name
