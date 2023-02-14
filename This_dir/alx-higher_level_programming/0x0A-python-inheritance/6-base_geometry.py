#!/usr/bin/python3

"""
Defining a class
"""


class BaseGeometry:
    """An empty geometrical class"""

    def area(self):
        msg = "area() is not implemented"
        raise Exception(msg)
